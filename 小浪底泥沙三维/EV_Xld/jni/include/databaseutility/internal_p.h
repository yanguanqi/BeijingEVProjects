#ifndef _INITERNAL_P_H_H_
#define _INITERNAL_P_H_H_
#include "core/stdheaders.h"
#include "core/unicodestring.h"
#include "define.h"
namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {

template<class K,class V>
class CSqlHash
{
public:
	void clear() { hash.clear(); }

	K key(V val) const
	{
		typename ev_hashmap<K,V>::const_iterator iter;

		for(iter=hash.begin();iter!=hash.end();++iter)
		{
			if(iter->second==val)
				return iter->first;
		}
		return K();
	}
	V value(K k) const
	{
		typename ev_hashmap<K,V>::const_iterator iter;
		if (hash->size == 0 || (iter=hash.find(k))==hash.end()) {
			return V();
		} else {
			return iter->second;
		}
	}
	V value(K k, V def) const
	{
		typename ev_hashmap<K,V>::const_iterator iter;
		if (hash.size() == 0 || (iter=hash.find(k))==hash.end()) {
			return def;
		} else {
			return iter->second;
		}
	}
	V& operator[](K k)
	{
		return hash[k];
	}
	bool isEmpty()
	{
		return hash.empty();
	};

private:
	ev_hashmap<K,V> hash;
};

static ev_string unicodeToUtf8(const ev_wstring &unicode)
{
	// 计算UTF8的长度
	ev_uint32 i,j,ret; 
	for(i=0,j=0;i<unicode.size();i++)
	{ 
		ret=0;
		if(unicode[i]<=0x007f)
		{
			ret=1;
		}
		else if(unicode[i]<=0x07ff)
		{
		ret=2;
		}
		else if(unicode[i]<=0xffff)
		{
			ret=3;
		}	
		j+=ret; 
	} 
	int Len = j;
	////////////////////////////////////////
	ev_char *utf8 = new ev_char[Len+1];

	for(i=0,j=0;i<unicode.size();i++)
	{ 
		ret=0;
		if(utf8!=0)
		{
			unsigned char *pChar=(unsigned char *)&unicode[i];

			if(unicode[i]<=0x007f)
			{
				utf8[j]=pChar[0];
				ret=1;
			}
			else if(unicode[i]<=0x07ff)
			{
				if(j  < (ev_uint32)Len )
				{
					utf8[j]=0xc0|(pChar[1])<<2|(pChar[0]>>6);
					utf8[j+1]=0x80|(pChar[0]&0x3f);
					ret=2;
				}
			}
			else if(unicode[i]<=0xffff)

			{
				if(j < (ev_uint32)Len && (j < ((ev_uint32)Len - 1)) )
				{
					utf8[j] = 0xe0|(pChar[1]>>4); 
					utf8[j+1] = 0x80|((pChar[1]&0x0f)<<2)|(pChar[0]>>6); 
					utf8[j+2] = 0x80|(pChar[0]&0x3f); 
					ret=3;
				}
			}
			j+=ret; 
		}
	} 

	utf8[Len] = '\0';
	ev_string str(utf8);
	delete[] utf8;

	return str;
}



} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView


#endif //_INITERNAL_P_H_H_
