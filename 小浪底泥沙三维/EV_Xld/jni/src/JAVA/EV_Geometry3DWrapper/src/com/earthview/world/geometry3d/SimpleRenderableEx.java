package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// </summary>
///   EarthView::World::Geometry3D::CSimpleRenderableEx扩展了CSimpleRenderable，可以直接操作顶点和索引缓存
/// </summary>
public class SimpleRenderableEx extends com.earthview.world.graphic.SimpleRenderable {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CSimpleRenderableEx", new SimpleRenderableExClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCSimpleRenderableExProxy", new SimpleRenderableExClassFactory());
	}

	public SimpleRenderableEx() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSimpleRenderableExProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.SimpleRenderableEx".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public SimpleRenderableEx(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCSimpleRenderableExProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.SimpleRenderableEx".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public SimpleRenderableEx(com.earthview.world.geometry3d.SimpleRenderableEx other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("JCSimpleRenderableExProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.SimpleRenderableEx".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public SimpleRenderableEx(com.earthview.world.geometry3d.SimpleRenderableEx other, String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCSimpleRenderableExProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.SimpleRenderableEx".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long OperatorAssign_CSimpleRenderableEx(long pNativeObject, long other);
	public com.earthview.world.geometry3d.SimpleRenderableEx OperatorAssign(com.earthview.world.geometry3d.SimpleRenderableEx other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CSimpleRenderableEx(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private void appendVertexElement_VertexElementType_VertexElementSemantic(long pNativeObject, int theType, int semantic);
	/// </summary>
	/// 在顶点声明的尾部增加一个单独的元素，注意增加元素的语言（EarthView::World::Graphic::VertexElementSemantic）
	/// 顺序是非常重要的，和D3D里FVF声明顺序一致
	/// </summary>
	/// <param name="theType">增加元素的类型</param>
	/// <param name="semantic">增加元素的语义</param>
	/// <returns>None</returns>
	public void appendVertexElement(com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		appendVertexElement_VertexElementType_VertexElementSemantic(this.nativeObject.pointer, theTypeParamValue, semanticParamValue);
	}
	native private void insertVertexElement_ev_int16_VertexElementType_VertexElementSemantic(long pNativeObject, short atPosition, int theType, int semantic);
	/// </summary>
	/// 在顶点声明里插入一个单独的元素，注意增加元素的语言（EarthView::World::Graphic::VertexElementSemantic）
	/// 顺序是非常重要的，和D3D里FVF声明顺序一致
	/// </summary>
	/// <param name="atPosition">插入的位置，表示前面已经有了多少元素</param>
	/// <param name="theType">插入元素的类型</param>
	/// <param name="semantic">插入元素的语义</param>
	/// <returns>None</returns>
	public void insertVertexElement(short atPosition, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		short atPositionParamValue = atPosition;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		insertVertexElement_ev_int16_VertexElementType_VertexElementSemantic(this.nativeObject.pointer, atPositionParamValue, theTypeParamValue, semanticParamValue);
	}
	native private void removeVertexElement_ev_int16(long pNativeObject, short elem_index);
	/// </summary>
	/// 在顶点声明里移除一个单独的元素
	/// </summary>
	/// <param name="elem_index">移除的位置</param>
	/// <returns>None</returns>
	public void removeVertexElement(short elem_index)
	{
		short elem_indexParamValue = elem_index;
		removeVertexElement_ev_int16(this.nativeObject.pointer, elem_indexParamValue);
	}
	native private void removeVertexElement_VertexElementSemantic(long pNativeObject, int semantic);
	/// </summary>
	/// 在顶点声明里移除相应语义
	/// </summary>
	/// <param name="semantic">移除的语义</param>
	/// <returns>None</returns>
	public void removeVertexElement(com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		int semanticParamValue = semantic.getValue();
		removeVertexElement_VertexElementSemantic(this.nativeObject.pointer, semanticParamValue);
	}
	native private void removeAllVertexElements_void(long pNativeObject);
	/// </summary>
	/// 在顶点声明里移除所有的的元素
	/// </summary>
	/// <returns>None</returns>
	public void removeAllVertexElements()
	{
		removeAllVertexElements_void(this.nativeObject.pointer);
	}
	native private void updateVertexElement_ev_int16_VertexElementType_VertexElementSemantic(long pNativeObject, short elem_index, int theType, int semantic);
	/// </summary>
	/// 修改在顶点声明里的单独的元素
	/// </summary>
	/// <param name="elem_index">修改的索引</param>
	/// <param name="theType">修改后的类型</param>
	/// <param name="semantic">修改后的语义</param>
	/// <returns>None</returns>
	public void updateVertexElement(short elem_index, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		short elem_indexParamValue = elem_index;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		updateVertexElement_ev_int16_VertexElementType_VertexElementSemantic(this.nativeObject.pointer, elem_indexParamValue, theTypeParamValue, semanticParamValue);
	}
	native private long findVertexElementBySemantic_VertexElementSemantic(long pNativeObject, int sem);
	/// </summary>
	///  查找语义绑定的的元素
	/// </summary>
	/// <param name="semantic">元素的语义</param>
	/// <returns>元素的类型</returns>
	public com.earthview.world.graphic.VertexElement findVertexElementBySemantic(com.earthview.world.graphic.VertexElementSemantic sem)
	{
		int semParamValue = sem.getValue();
		long returnValue = findVertexElementBySemantic_VertexElementSemantic(this.nativeObject.pointer, semParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}
	native private long getVertexElementCount_void(long pNativeObject);
	/// </summary>
	/// 获取现有声明元素的个数
	/// </summary>
	/// <returns>现有声明元素的个数</returns>
	public long getVertexElementCount()
	{
		long returnValue = getVertexElementCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void sortVertexElements_void(long pNativeObject);
	/// </summary>
	/// 对现有的声明元素按照D3D里顶点声明的标准顺序进行排序，在不确定D3D里FVF顺序的情况下，
	/// 调用这个确保顺序正确，不过需要计算
	/// </summary>
	/// <returns>None</returns>
	public void sortVertexElements()
	{
		sortVertexElements_void(this.nativeObject.pointer);
	}
	native private void closeGapsInSource_void(long pNativeObject);
	/// </summary>
	/// 关闭顶点数据的空隙，因为顶点数据里是不能有空隙的，当你修改了顶点声明后
	/// 可以移除顶点数据里对应的数据，如果当你对定带你数据进行了绑定，你需要重新
	/// 对其进行绑定声明
	/// </summary>
	/// <returns>None</returns>
	public void closeGapsInSource()
	{
		closeGapsInSource_void(this.nativeObject.pointer);
	}
	native private void setOperationType_OperationType(long pNativeObject, int type);
	/// </summary>
	///  设置绘制的类型，点，点串，线，三角面，三角扇等
	/// </summary>
	/// <param name="type">绘制的类型</param>
	/// <returns>None</returns>
	public void setOperationType(com.earthview.world.graphic.RenderOperation.OperationType type)
	{
		int typeParamValue = type.getValue();
		setOperationType_OperationType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getOperationType_void(long pNativeObject);
	/// </summary>
	/// 获取绘制的类型，点，点串，线，三角面，三角扇等
	/// </summary>
	/// <returns>绘制的类型</returns>
	public com.earthview.world.graphic.RenderOperation.OperationType getOperationType()
	{
		int returnValue = getOperationType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.RenderOperation.OperationType.toEnum(returnValue);
	}
	native private boolean indexesUsed_void(long pNativeObject);
	/// </summary>
	/// 是否使用了索引缓存
	/// </summary>
	/// <returns>是否使用了索引缓存,true为使用</returns>
	public boolean indexesUsed()
	{
		boolean returnValue = indexesUsed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void useIndexes_ev_bool(long pNativeObject, boolean bUse);
	/// </summary>
	/// 设置是否使用了索引缓存
	/// </summary>
	/// <param name="bUse">true为使用</param>
	/// <returns>None</returns>
	public void useIndexes(boolean bUse)
	{
		boolean bUseParamValue = bUse;
		useIndexes_ev_bool(this.nativeObject.pointer, bUseParamValue);
	}
	native private void createVertexBuffer_ev_int32_Usage(long pNativeObject, int count, int usage);
	/// </summary>
	///  创建一块顶点缓冲区
	/// </summary>
	/// <param name="count">缓冲区元素的个数，即点的个数</param>
	/// <param name="usage">缓冲区的类型</param>
	/// <returns>None</returns>
	public void createVertexBuffer(int count, com.earthview.world.graphic.HardwareBuffer.Usage usage)
	{
		int countParamValue = count;
		int usageParamValue = usage.getValue();
		createVertexBuffer_ev_int32_Usage(this.nativeObject.pointer, countParamValue, usageParamValue);
	}
	native private void setIncreaseVertexBuffer_ev_int32(long pNativeObject, int count);
	/// </summary>
	///  设置顶点缓冲区写满时自动扩充的数量,不调用类的write方法写buf此接口无效
	/// </summary>
	/// <param name="count">自动扩充的数量</param>
	/// <returns>None</returns>
	public void setIncreaseVertexBuffer(int count)
	{
		int countParamValue = count;
		setIncreaseVertexBuffer_ev_int32(this.nativeObject.pointer, countParamValue);
	}
	native private long lockVertexBuffer_LockOptions(long pNativeObject, int lockOptions);
	/// </summary>
	///  锁定一块顶点缓冲区，缓冲区必须创建
	/// </summary>
	/// <param name="lockOptions">锁定缓冲区的形式</param>
	/// <returns>None</returns>
	public VoidPointer lockVertexBuffer(com.earthview.world.graphic.HardwareBuffer.LockOptions lockOptions)
	{
		int lockOptionsParamValue = lockOptions.getValue();
		long returnValue = lockVertexBuffer_LockOptions(this.nativeObject.pointer, lockOptionsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long lockVertexBuffer_LockOptions_ev_size_t_ev_bool(long pNativeObject, int lockOptions, long offset, boolean autoCalcDeclaration);
	/// </summary>
	///  重新锁定一块顶点缓冲区，缓冲区必须创建
	/// </summary>
	/// <param name="lockOptions">锁定缓冲区的形式</param>
	/// <param name="offset">重新锁定的偏移量</param>
	/// <param name="autoCalcDeclaration">自动计算偏移量，true为offset乘以Declaration的大小,false直接偏移offset</param>
	/// <returns>None</returns>
	public VoidPointer lockVertexBuffer(com.earthview.world.graphic.HardwareBuffer.LockOptions lockOptions, long offset, boolean autoCalcDeclaration)
	{
		int lockOptionsParamValue = lockOptions.getValue();
		long offsetParamValue = offset;
		boolean autoCalcDeclarationParamValue = autoCalcDeclaration;
		long returnValue = lockVertexBuffer_LockOptions_ev_size_t_ev_bool(this.nativeObject.pointer, lockOptionsParamValue, offsetParamValue, autoCalcDeclarationParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void writeVertexDataPosition_CVector3(long pNativeObject, long position);
	/// </summary>
	///  写入顶点坐标
	/// </summary>
	/// <param name="index">顶点坐标</param>
	/// <returns>None</returns>
	public void writeVertexDataPosition(com.earthview.world.spatial.math.Vector3 position)
	{
		long positionParamValue = position.nativeObject.pointer;
		writeVertexDataPosition_CVector3(this.nativeObject.pointer, positionParamValue);
	}
	native private void writeVertexDataNormal_CVector3(long pNativeObject, long normal);
	/// </summary>
	///  写入顶点法向量
	/// </summary>
	/// <param name="index">顶点法向量</param>
	/// <returns>None</returns>
	public void writeVertexDataNormal(com.earthview.world.spatial.math.Vector3 normal)
	{
		long normalParamValue = normal.nativeObject.pointer;
		writeVertexDataNormal_CVector3(this.nativeObject.pointer, normalParamValue);
	}
	native private void writeVertexDataTangle_CVector3(long pNativeObject, long tangent);
	/// </summary>
	///  写入顶点切线
	/// </summary>
	/// <param name="index">顶点切线</param>
	/// <returns>None</returns>
	public void writeVertexDataTangle(com.earthview.world.spatial.math.Vector3 tangent)
	{
		long tangentParamValue = tangent.nativeObject.pointer;
		writeVertexDataTangle_CVector3(this.nativeObject.pointer, tangentParamValue);
	}
	native private void writeVertexDataTexCoord_CVector4(long pNativeObject, long texCoord);
	/// </summary>
	///  写入顶点纹理坐标
	///  当声明为VET_FLOAT4时，存储的值为texCoord的x,y,z,w四位
	///  当声明为VET_FLOAT3时，存储的值为texCoord的x,y,z三位
	///  当声明为VET_FLOAT2时，存储的值为texCoord的x,y两位
	/// </summary>
	/// <param name="index">顶点纹理坐标</param>
	/// <returns>None</returns>
	public void writeVertexDataTexCoord(com.earthview.world.spatial.math.Vector4 texCoord)
	{
		long texCoordParamValue = texCoord.nativeObject.pointer;
		writeVertexDataTexCoord_CVector4(this.nativeObject.pointer, texCoordParamValue);
	}
	native private void writeVertexDataColour_CColourValue(long pNativeObject, long colour);
	/// </summary>
	///  写入顶点颜色
	/// </summary>
	/// <param name="index">顶点颜色</param>
	/// <returns>None</returns>
	public void writeVertexDataColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		writeVertexDataColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private void writeVertexData_CVertex(long pNativeObject, long vertex);
	/// </summary>
	///  写入顶点数据数据，注意此时一定是要lockVertexBuffer的
	/// </summary>
	/// <param name="index">顶点数据</param>
	/// <returns>None</returns>
	public void writeVertexData(com.earthview.world.geometry3d.Vertex vertex)
	{
		long vertexParamValue = vertex.nativeObject.pointer;
		writeVertexData_CVertex(this.nativeObject.pointer, vertexParamValue);
	}
	native private void writeVertexDataBuffer_CVertexVector(long pNativeObject, long vertexBuffer);
	/// </summary>
	///  写入一批顶点数据数据集合，注意此时一定是要lockVertexBuffer的
	/// </summary>
	/// <param name="index">一批顶点数据集合</param>
	/// <returns>None</returns>
	public void writeVertexDataBuffer(com.earthview.world.geometry3d.VertexVector vertexBuffer)
	{
		long vertexBufferParamValue = vertexBuffer.nativeObject.pointer;
		writeVertexDataBuffer_CVertexVector(this.nativeObject.pointer, vertexBufferParamValue);
	}
	native private void writeVertexDataBuffer_ev_byte_ev_uint32(long pNativeObject, long vertexBuffer, long count);
	public void writeVertexDataBuffer(UBytePointer vertexBuffer, long count)
	{
		long vertexBufferParamValue = (vertexBuffer == null ? 0L : vertexBuffer.nativeObject.pointer);
		long countParamValue = count;
		writeVertexDataBuffer_ev_byte_ev_uint32(this.nativeObject.pointer, vertexBufferParamValue, countParamValue);
	}
	native private void readVertexBuffer_ev_uint32_ev_uint32_CVertexVector(long pNativeObject, long start, long count, long vertexBuffer);
	/// </summary>
	///  读取缓冲区内容，缓冲区的锁定方式为可读方行
	/// </summary>
	/// <param name="start">读取的起始位置</param>
	/// <param name="count">读取的数量，为vertexBuffer的数量</param>
	/// <param name="vertexBuffer">读取缓冲区的内容</param>
	/// <returns>None</returns>
	public void readVertexBuffer(long start, long count, com.earthview.world.geometry3d.VertexVector vertexBuffer)
	{
		long startParamValue = start;
		long countParamValue = count;
		long vertexBufferParamValue = vertexBuffer.nativeObject.pointer;
		readVertexBuffer_ev_uint32_ev_uint32_CVertexVector(this.nativeObject.pointer, startParamValue, countParamValue, vertexBufferParamValue);
	}
	native private void readVertexBufferToEnd_ev_uint32_CVertexVector(long pNativeObject, long start, long vertexBuffer);
	/// </summary>
	///  读取缓冲区内容到结尾，缓冲区的锁定方式为可读方行
	/// </summary>
	/// <param name="start">读取的起始位置</param>
	/// <param name="vertexBuffer">读取缓冲区的内容</param>
	/// <returns>None</returns>
	public void readVertexBufferToEnd(long start, com.earthview.world.geometry3d.VertexVector vertexBuffer)
	{
		long startParamValue = start;
		long vertexBufferParamValue = vertexBuffer.nativeObject.pointer;
		readVertexBufferToEnd_ev_uint32_CVertexVector(this.nativeObject.pointer, startParamValue, vertexBufferParamValue);
	}
	native private void unlockVertexBuffer_void(long pNativeObject);
	/// </summary>
	///  为顶点缓冲区解锁，与lockVertexBuffer成对使用
	/// </summary>
	/// <returns>None</returns>
	public void unlockVertexBuffer()
	{
		unlockVertexBuffer_void(this.nativeObject.pointer);
	}
	native private boolean seekVertexBuffer_ev_uint32(long pNativeObject, long offset);
	/// </summary>
	///  移到顶点缓冲区读写指针到指定位置
	/// </summary>
	/// <returns>None</returns>
	public boolean seekVertexBuffer(long offset)
	{
		long offsetParamValue = offset;
		boolean returnValue = seekVertexBuffer_ev_uint32(this.nativeObject.pointer, offsetParamValue);
		return returnValue;
	}
	native private long tellVertexBuffer_void(long pNativeObject);
	/// </summary>
	///  获取顶点缓冲区读写指针的当前位置
	/// </summary>
	/// <returns>None</returns>
	public long tellVertexBuffer()
	{
		long returnValue = tellVertexBuffer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getVertexBufferLocked_void(long pNativeObject);
	/// </summary>
	///  查看顶点缓存是否被lock
	/// </summary>
	/// <returns>true为锁定</returns>
	public boolean getVertexBufferLocked()
	{
		boolean returnValue = getVertexBufferLocked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void createIndexBuffer_IndexType_ev_uint32_Usage(long pNativeObject, int itype, long count, int usage);
	/// </summary>
	///  创建一块索引缓冲区
	/// </summary>
	/// <param name="count">缓冲区元素的个数，即索引的个数</param>
	/// <param name="usage">缓冲区的类型</param>
	/// <returns>None</returns>
	public void createIndexBuffer(com.earthview.world.graphic.HardwareIndexBuffer.IndexType itype, long count, com.earthview.world.graphic.HardwareBuffer.Usage usage)
	{
		int itypeParamValue = itype.getValue();
		long countParamValue = count;
		int usageParamValue = usage.getValue();
		createIndexBuffer_IndexType_ev_uint32_Usage(this.nativeObject.pointer, itypeParamValue, countParamValue, usageParamValue);
	}
	native private void setIncreaseIndexBuffer_ev_int32(long pNativeObject, int count);
	/// </summary>
	///  设置索引缓冲区写满时自动扩充的数量,不调用类的write方法写buf此接口无效
	/// </summary>
	/// <param name="count">自动扩充的数量</param>
	/// <returns>None</returns>
	public void setIncreaseIndexBuffer(int count)
	{
		int countParamValue = count;
		setIncreaseIndexBuffer_ev_int32(this.nativeObject.pointer, countParamValue);
	}
	native private long lockIndexBuffer_LockOptions(long pNativeObject, int lockOptions);
	/// </summary>
	///  锁定一块索引缓冲区，缓冲区是创建了的，必须是已经解锁
	/// </summary>
	/// <param name="lockOptions">锁定缓冲区的形式</param>
	/// <returns>None</returns>
	public VoidPointer lockIndexBuffer(com.earthview.world.graphic.HardwareBuffer.LockOptions lockOptions)
	{
		int lockOptionsParamValue = lockOptions.getValue();
		long returnValue = lockIndexBuffer_LockOptions(this.nativeObject.pointer, lockOptionsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long lockIndexBuffer_LockOptions_ev_size_t(long pNativeObject, int lockOptions, long offset);
	/// </summary>
	///  重新锁定一块索引缓冲区，缓冲区是创建了的，必须是已经解锁
	/// </summary>
	/// <param name="lockOptions">锁定缓冲区的形式</param>
	/// <param name="offset">重新锁定后的偏移量</param>
	/// <returns>None</returns>
	public VoidPointer lockIndexBuffer(com.earthview.world.graphic.HardwareBuffer.LockOptions lockOptions, long offset)
	{
		int lockOptionsParamValue = lockOptions.getValue();
		long offsetParamValue = offset;
		long returnValue = lockIndexBuffer_LockOptions_ev_size_t(this.nativeObject.pointer, lockOptionsParamValue, offsetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void writeIndexData_ev_uint16(long pNativeObject, int index);
	/// </summary>
	///  写入一个索引数据
	/// </summary>
	/// <param name="index">一个索引数据</param>
	/// <returns>None</returns>
	public void writeIndexData(int index)
	{
		int indexParamValue = index;
		writeIndexData_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void writeIndexData_ev_uint32(long pNativeObject, long index);
	public void writeIndexData(long index)
	{
		long indexParamValue = index;
		writeIndexData_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void writeIndexDataBuffer_CIndexVector(long pNativeObject, long indexBuffer);
	/// </summary>
	///  写入一批索引数据，注意此时一定是要lockIndexBuffer的
	/// </summary>
	/// <param name="index">一批索引数据</param>
	/// <returns>None</returns>
	public void writeIndexDataBuffer(com.earthview.world.geometry3d.IndexVector indexBuffer)
	{
		long indexBufferParamValue = indexBuffer.nativeObject.pointer;
		writeIndexDataBuffer_CIndexVector(this.nativeObject.pointer, indexBufferParamValue);
	}
	native private void writeIndexDataBuffer_ev_byte_ev_uint32(long pNativeObject, long indexBuffer, long count);
	public void writeIndexDataBuffer(UBytePointer indexBuffer, long count)
	{
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		long countParamValue = count;
		writeIndexDataBuffer_ev_byte_ev_uint32(this.nativeObject.pointer, indexBufferParamValue, countParamValue);
	}
	native private void readIndexBuffer_ev_uint32_ev_uint32_CIndexVector(long pNativeObject, long start, long count, long indexBuffer);
	/// </summary>
	///  读取缓冲区内容，缓冲区的锁定方式为可读方行
	/// </summary>
	/// <param name="start">读取的起始位置</param>
	/// <param name="count">读取的数量，为indexBuffer的数量</param>
	/// <param name="vertexBuffer">读取缓冲区的内容</param>
	/// <returns>None</returns>
	public void readIndexBuffer(long start, long count, com.earthview.world.geometry3d.IndexVector indexBuffer)
	{
		long startParamValue = start;
		long countParamValue = count;
		long indexBufferParamValue = indexBuffer.nativeObject.pointer;
		readIndexBuffer_ev_uint32_ev_uint32_CIndexVector(this.nativeObject.pointer, startParamValue, countParamValue, indexBufferParamValue);
	}
	native private void readIndexBufferToEnd_ev_uint32_CIndexVector(long pNativeObject, long start, long indexBuffer);
	/// </summary>
	///  读取缓冲区内容到结尾，缓冲区的锁定方式为可读方行
	/// </summary>
	/// <param name="start">读取的起始位置</param>
	/// <param name="vertexBuffer">读取缓冲区的内容</param>
	/// <returns>None</returns>
	public void readIndexBufferToEnd(long start, com.earthview.world.geometry3d.IndexVector indexBuffer)
	{
		long startParamValue = start;
		long indexBufferParamValue = indexBuffer.nativeObject.pointer;
		readIndexBufferToEnd_ev_uint32_CIndexVector(this.nativeObject.pointer, startParamValue, indexBufferParamValue);
	}
	native private void unlockIndexBuffer_void(long pNativeObject);
	/// </summary>
	///  为索引缓冲区解锁，与lockIndexBuffer成对使用
	/// </summary>
	/// <returns>None</returns>
	public void unlockIndexBuffer()
	{
		unlockIndexBuffer_void(this.nativeObject.pointer);
	}
	native private boolean seekIndexBuffer_ev_uint32(long pNativeObject, long offset);
	/// </summary>
	///  移到索引缓冲区读写指针到指定位置
	/// </summary>
	/// <returns>None</returns>
	public boolean seekIndexBuffer(long offset)
	{
		long offsetParamValue = offset;
		boolean returnValue = seekIndexBuffer_ev_uint32(this.nativeObject.pointer, offsetParamValue);
		return returnValue;
	}
	native private long tellIndexBuffer_void(long pNativeObject);
	/// </summary>
	///  获取索引缓冲区读写指针的当前位置
	/// </summary>
	/// <returns>None</returns>
	public long tellIndexBuffer()
	{
		long returnValue = tellIndexBuffer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getIndexBufferLocked_void(long pNativeObject);
	/// </summary>
	///  查看索引缓存是否被lock
	/// </summary>
	/// <returns>true为锁定</returns>
	public boolean getIndexBufferLocked()
	{
		boolean returnValue = getIndexBufferLocked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
	/**
	 * 当前摄像机到物体的垂直距离，用于透明物体的排序，默认返回父节点的到摄像机的垂直距离
	 * @param cam 当前图元所对着的摄像机
	 * @return 点到到摄像机的垂直距离
	 */
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}
	native private double getSquaredViewDepth_CCamera_NoVirtual(long pNativeObject, long cam);
	protected double getSquaredViewDepth_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}

	native private double getBoundingRadius_void(long pNativeObject);
	/**
	 * 矢量图元包围球的半径，默认返回包围盒的内接椭球的最大轴
	 * @return 矢量图元包围球的半径
	 */
	public double getBoundingRadius()
	{
		double returnValue = getBoundingRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBoundingRadius_void_NoVirtual(long pNativeObject);
	protected double getBoundingRadius_NoVirtual()
	{
		double returnValue = getBoundingRadius_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
	/**
	 * 给矢量图元提供一个世界变换矩阵，默认提供一个单位矩阵，即不变换
	 * @param xform 物体的世界变化矩阵，赋值
	 * @return None
	 */
	public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
		getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
	}
	native private void getWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
	protected void getWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
		getWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
	}

	protected  long unions_CSimpleRenderableEx_IColor_CVector3_callback(long another, long pNewColor, long offset)
	{
		com.earthview.world.geometry3d.SimpleRenderableEx anotherParamValue = (another == 0L ? null : new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate));
		if(anotherParamValue != null)
		{
		anotherParamValue.setDelegate(true);
		anotherParamValue.setInstancePointer(new InstancePointer(another));
		IClassFactory anotherParamValueClassFactory = GlobalClassFactoryMap.get(anotherParamValue.getCppInstanceTypeName());
		if (anotherParamValueClassFactory != null)
		{
			anotherParamValue.setDelegate(true);
			anotherParamValue = (com.earthview.world.geometry3d.SimpleRenderableEx)anotherParamValueClassFactory.create();
			anotherParamValue.setDelegate(true);
			anotherParamValue.setInstancePointer(new InstancePointer(another));
		}
		}
		com.earthview.world.spatial.display.Icolor pNewColorParamValue = (pNewColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pNewColorParamValue != null)
		{
		pNewColorParamValue.setDelegate(true);
		pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		IClassFactory pNewColorParamValueClassFactory = GlobalClassFactoryMap.get(pNewColorParamValue.getCppInstanceTypeName());
		if (pNewColorParamValueClassFactory != null)
		{
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue = (com.earthview.world.spatial.display.Icolor)pNewColorParamValueClassFactory.create();
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		}
		}
		com.earthview.world.spatial.math.Vector3 offsetParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		offsetParamValue.setDelegate(true);
		offsetParamValue.setInstancePointer(new InstancePointer(offset));
		IClassFactory offsetParamValueClassFactory = GlobalClassFactoryMap.get(offsetParamValue.getCppInstanceTypeName());
		if (offsetParamValueClassFactory != null)
		{
			offsetParamValue.setDelegate(true);
			offsetParamValue = (com.earthview.world.spatial.math.Vector3)offsetParamValueClassFactory.create();
			offsetParamValue.setDelegate(true);
			offsetParamValue.setInstancePointer(new InstancePointer(offset));
		}
		com.earthview.world.geometry3d.SimpleRenderableEx returnValue = unions(anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long unions_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, long another, long pNewColor, long offset);
	/**
	 * 进行（A∪B）的操作
	 * @return 结果几何体
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx unions(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		long offsetParamValue = offset.nativeObject.pointer;
		long returnValue = unions_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private long unions_CSimpleRenderableEx_IColor_CVector3_NoVirtual(long pNativeObject, long another, long pNewColor, long offset);
	protected com.earthview.world.geometry3d.SimpleRenderableEx unions_NoVirtual(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		long offsetParamValue = offset.nativeObject.pointer;
		long returnValue = unions_CSimpleRenderableEx_IColor_CVector3_NoVirtual(this.nativeObject.pointer, anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}

	protected  long intersect_CSimpleRenderableEx_IColor_CVector3_callback(long another, long pNewColor, long offset)
	{
		com.earthview.world.geometry3d.SimpleRenderableEx anotherParamValue = (another == 0L ? null : new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate));
		if(anotherParamValue != null)
		{
		anotherParamValue.setDelegate(true);
		anotherParamValue.setInstancePointer(new InstancePointer(another));
		IClassFactory anotherParamValueClassFactory = GlobalClassFactoryMap.get(anotherParamValue.getCppInstanceTypeName());
		if (anotherParamValueClassFactory != null)
		{
			anotherParamValue.setDelegate(true);
			anotherParamValue = (com.earthview.world.geometry3d.SimpleRenderableEx)anotherParamValueClassFactory.create();
			anotherParamValue.setDelegate(true);
			anotherParamValue.setInstancePointer(new InstancePointer(another));
		}
		}
		com.earthview.world.spatial.display.Icolor pNewColorParamValue = (pNewColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pNewColorParamValue != null)
		{
		pNewColorParamValue.setDelegate(true);
		pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		IClassFactory pNewColorParamValueClassFactory = GlobalClassFactoryMap.get(pNewColorParamValue.getCppInstanceTypeName());
		if (pNewColorParamValueClassFactory != null)
		{
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue = (com.earthview.world.spatial.display.Icolor)pNewColorParamValueClassFactory.create();
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		}
		}
		com.earthview.world.spatial.math.Vector3 offsetParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		offsetParamValue.setDelegate(true);
		offsetParamValue.setInstancePointer(new InstancePointer(offset));
		IClassFactory offsetParamValueClassFactory = GlobalClassFactoryMap.get(offsetParamValue.getCppInstanceTypeName());
		if (offsetParamValueClassFactory != null)
		{
			offsetParamValue.setDelegate(true);
			offsetParamValue = (com.earthview.world.spatial.math.Vector3)offsetParamValueClassFactory.create();
			offsetParamValue.setDelegate(true);
			offsetParamValue.setInstancePointer(new InstancePointer(offset));
		}
		com.earthview.world.geometry3d.SimpleRenderableEx returnValue = intersect(anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long intersect_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, long another, long pNewColor, long offset);
	/**
	 * 进行（A∩B）的操作
	 * @return 结果几何体
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx intersect(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		long offsetParamValue = offset.nativeObject.pointer;
		long returnValue = intersect_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private long intersect_CSimpleRenderableEx_IColor_CVector3_NoVirtual(long pNativeObject, long another, long pNewColor, long offset);
	protected com.earthview.world.geometry3d.SimpleRenderableEx intersect_NoVirtual(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		long offsetParamValue = offset.nativeObject.pointer;
		long returnValue = intersect_CSimpleRenderableEx_IColor_CVector3_NoVirtual(this.nativeObject.pointer, anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}

	protected  long minus_CSimpleRenderableEx_IColor_CVector3_callback(long another, long pNewColor, long offset)
	{
		com.earthview.world.geometry3d.SimpleRenderableEx anotherParamValue = (another == 0L ? null : new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate));
		if(anotherParamValue != null)
		{
		anotherParamValue.setDelegate(true);
		anotherParamValue.setInstancePointer(new InstancePointer(another));
		IClassFactory anotherParamValueClassFactory = GlobalClassFactoryMap.get(anotherParamValue.getCppInstanceTypeName());
		if (anotherParamValueClassFactory != null)
		{
			anotherParamValue.setDelegate(true);
			anotherParamValue = (com.earthview.world.geometry3d.SimpleRenderableEx)anotherParamValueClassFactory.create();
			anotherParamValue.setDelegate(true);
			anotherParamValue.setInstancePointer(new InstancePointer(another));
		}
		}
		com.earthview.world.spatial.display.Icolor pNewColorParamValue = (pNewColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pNewColorParamValue != null)
		{
		pNewColorParamValue.setDelegate(true);
		pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		IClassFactory pNewColorParamValueClassFactory = GlobalClassFactoryMap.get(pNewColorParamValue.getCppInstanceTypeName());
		if (pNewColorParamValueClassFactory != null)
		{
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue = (com.earthview.world.spatial.display.Icolor)pNewColorParamValueClassFactory.create();
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		}
		}
		com.earthview.world.spatial.math.Vector3 offsetParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		offsetParamValue.setDelegate(true);
		offsetParamValue.setInstancePointer(new InstancePointer(offset));
		IClassFactory offsetParamValueClassFactory = GlobalClassFactoryMap.get(offsetParamValue.getCppInstanceTypeName());
		if (offsetParamValueClassFactory != null)
		{
			offsetParamValue.setDelegate(true);
			offsetParamValue = (com.earthview.world.spatial.math.Vector3)offsetParamValueClassFactory.create();
			offsetParamValue.setDelegate(true);
			offsetParamValue.setInstancePointer(new InstancePointer(offset));
		}
		com.earthview.world.geometry3d.SimpleRenderableEx returnValue = minus(anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long minus_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, long another, long pNewColor, long offset);
	/**
	 * 进行（A-B）的操作，即去除A中包含的B的部分
	 * @return 结果几何体
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx minus(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		long offsetParamValue = offset.nativeObject.pointer;
		long returnValue = minus_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private long minus_CSimpleRenderableEx_IColor_CVector3_NoVirtual(long pNativeObject, long another, long pNewColor, long offset);
	protected com.earthview.world.geometry3d.SimpleRenderableEx minus_NoVirtual(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		long offsetParamValue = offset.nativeObject.pointer;
		long returnValue = minus_CSimpleRenderableEx_IColor_CVector3_NoVirtual(this.nativeObject.pointer, anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}

	protected  long difference_CSimpleRenderableEx_IColor_CVector3_callback(long another, long pNewColor, long offset)
	{
		com.earthview.world.geometry3d.SimpleRenderableEx anotherParamValue = (another == 0L ? null : new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate));
		if(anotherParamValue != null)
		{
		anotherParamValue.setDelegate(true);
		anotherParamValue.setInstancePointer(new InstancePointer(another));
		IClassFactory anotherParamValueClassFactory = GlobalClassFactoryMap.get(anotherParamValue.getCppInstanceTypeName());
		if (anotherParamValueClassFactory != null)
		{
			anotherParamValue.setDelegate(true);
			anotherParamValue = (com.earthview.world.geometry3d.SimpleRenderableEx)anotherParamValueClassFactory.create();
			anotherParamValue.setDelegate(true);
			anotherParamValue.setInstancePointer(new InstancePointer(another));
		}
		}
		com.earthview.world.spatial.display.Icolor pNewColorParamValue = (pNewColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pNewColorParamValue != null)
		{
		pNewColorParamValue.setDelegate(true);
		pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		IClassFactory pNewColorParamValueClassFactory = GlobalClassFactoryMap.get(pNewColorParamValue.getCppInstanceTypeName());
		if (pNewColorParamValueClassFactory != null)
		{
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue = (com.earthview.world.spatial.display.Icolor)pNewColorParamValueClassFactory.create();
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		}
		}
		com.earthview.world.spatial.math.Vector3 offsetParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		offsetParamValue.setDelegate(true);
		offsetParamValue.setInstancePointer(new InstancePointer(offset));
		IClassFactory offsetParamValueClassFactory = GlobalClassFactoryMap.get(offsetParamValue.getCppInstanceTypeName());
		if (offsetParamValueClassFactory != null)
		{
			offsetParamValue.setDelegate(true);
			offsetParamValue = (com.earthview.world.spatial.math.Vector3)offsetParamValueClassFactory.create();
			offsetParamValue.setDelegate(true);
			offsetParamValue.setInstancePointer(new InstancePointer(offset));
		}
		com.earthview.world.geometry3d.SimpleRenderableEx returnValue = difference(anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long difference_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, long another, long pNewColor, long offset);
	/**
	 * 进行（（A∪B)-（A∩B））的操作对称差分（其结果是：两几何体求并的结果差分这两个几何体求交的结果所得到的几何体）
	 * @return 结果几何体
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx difference(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		long offsetParamValue = offset.nativeObject.pointer;
		long returnValue = difference_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private long difference_CSimpleRenderableEx_IColor_CVector3_NoVirtual(long pNativeObject, long another, long pNewColor, long offset);
	protected com.earthview.world.geometry3d.SimpleRenderableEx difference_NoVirtual(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		long offsetParamValue = offset.nativeObject.pointer;
		long returnValue = difference_CSimpleRenderableEx_IColor_CVector3_NoVirtual(this.nativeObject.pointer, anotherParamValue, pNewColorParamValue, offsetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}

	protected  boolean isIntersected_CSimpleRenderableEx_callback(long another)
	{
		com.earthview.world.geometry3d.SimpleRenderableEx anotherParamValue = (another == 0L ? null : new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate));
		if(anotherParamValue != null)
		{
		anotherParamValue.setDelegate(true);
		anotherParamValue.setInstancePointer(new InstancePointer(another));
		IClassFactory anotherParamValueClassFactory = GlobalClassFactoryMap.get(anotherParamValue.getCppInstanceTypeName());
		if (anotherParamValueClassFactory != null)
		{
			anotherParamValue.setDelegate(true);
			anotherParamValue = (com.earthview.world.geometry3d.SimpleRenderableEx)anotherParamValueClassFactory.create();
			anotherParamValue.setDelegate(true);
			anotherParamValue.setInstancePointer(new InstancePointer(another));
		}
		}
		boolean returnValue = isIntersected(anotherParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isIntersected_CSimpleRenderableEx(long pNativeObject, long another);
	/**
	 * 判断指定几何体与该几何体是否相交
	 * @return 是否相交的布尔值
	 */
	public boolean isIntersected(com.earthview.world.geometry3d.SimpleRenderableEx another)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		boolean returnValue = isIntersected_CSimpleRenderableEx(this.nativeObject.pointer, anotherParamValue);
		return returnValue;
	}
	native private boolean isIntersected_CSimpleRenderableEx_NoVirtual(long pNativeObject, long another);
	protected boolean isIntersected_NoVirtual(com.earthview.world.geometry3d.SimpleRenderableEx another)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		boolean returnValue = isIntersected_CSimpleRenderableEx_NoVirtual(this.nativeObject.pointer, anotherParamValue);
		return returnValue;
	}

	protected  boolean isIntersected_CCurve_callback(long curve)
	{
		com.earthview.world.spatial.geometry.Curve curveParamValue = (curve == 0L ? null : new com.earthview.world.spatial.geometry.Curve(CreatedWhenConstruct.CWC_NotToCreate));
		if(curveParamValue != null)
		{
		curveParamValue.setDelegate(true);
		curveParamValue.setInstancePointer(new InstancePointer(curve));
		IClassFactory curveParamValueClassFactory = GlobalClassFactoryMap.get(curveParamValue.getCppInstanceTypeName());
		if (curveParamValueClassFactory != null)
		{
			curveParamValue.setDelegate(true);
			curveParamValue = (com.earthview.world.spatial.geometry.Curve)curveParamValueClassFactory.create();
			curveParamValue.setDelegate(true);
			curveParamValue.setInstancePointer(new InstancePointer(curve));
		}
		}
		boolean returnValue = isIntersected(curveParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isIntersected_CCurve(long pNativeObject, long curve);
	/**
	 * 判断线与体是否相交
	 * @return 返回是否相交的布尔值
	 */
	public boolean isIntersected(com.earthview.world.spatial.geometry.Curve curve)
	{
		long curveParamValue = (curve == null ? 0L : curve.nativeObject.pointer);
		boolean returnValue = isIntersected_CCurve(this.nativeObject.pointer, curveParamValue);
		return returnValue;
	}
	native private boolean isIntersected_CCurve_NoVirtual(long pNativeObject, long curve);
	protected boolean isIntersected_NoVirtual(com.earthview.world.spatial.geometry.Curve curve)
	{
		long curveParamValue = (curve == null ? 0L : curve.nativeObject.pointer);
		boolean returnValue = isIntersected_CCurve_NoVirtual(this.nativeObject.pointer, curveParamValue);
		return returnValue;
	}

	protected  int contains_CPoint_callback(long point)
	{
		com.earthview.world.spatial.geometry.Point pointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Point)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		com.earthview.world.geometry3d.EVPointWithinType returnValue = contains(pointParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int contains_CPoint(long pNativeObject, long point);
	/**
	 * 判断点与体的关系
	 * @return 返回关系枚举
	 */
	public com.earthview.world.geometry3d.EVPointWithinType contains(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = point.nativeObject.pointer;
		int returnValue = contains_CPoint(this.nativeObject.pointer, pointParamValue);
		return com.earthview.world.geometry3d.EVPointWithinType.toEnum(returnValue);
	}
	native private int contains_CPoint_NoVirtual(long pNativeObject, long point);
	protected com.earthview.world.geometry3d.EVPointWithinType contains_NoVirtual(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = point.nativeObject.pointer;
		int returnValue = contains_CPoint_NoVirtual(this.nativeObject.pointer, pointParamValue);
		return com.earthview.world.geometry3d.EVPointWithinType.toEnum(returnValue);
	}

	protected  boolean sliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_callback(long another, long faceMap, long sharedEdges, long pNewColor)
	{
		com.earthview.world.geometry3d.SimpleRenderableEx anotherParamValue = (another == 0L ? null : new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate));
		if(anotherParamValue != null)
		{
		anotherParamValue.setDelegate(true);
		anotherParamValue.setInstancePointer(new InstancePointer(another));
		IClassFactory anotherParamValueClassFactory = GlobalClassFactoryMap.get(anotherParamValue.getCppInstanceTypeName());
		if (anotherParamValueClassFactory != null)
		{
			anotherParamValue.setDelegate(true);
			anotherParamValue = (com.earthview.world.geometry3d.SimpleRenderableEx)anotherParamValueClassFactory.create();
			anotherParamValue.setDelegate(true);
			anotherParamValue.setInstancePointer(new InstancePointer(another));
		}
		}
		com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet faceMapParamValue = new com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet(CreatedWhenConstruct.CWC_NotToCreate);
		faceMapParamValue.setDelegate(true);
		faceMapParamValue.setInstancePointer(new InstancePointer(faceMap));
		IClassFactory faceMapParamValueClassFactory = GlobalClassFactoryMap.get(faceMapParamValue.getCppInstanceTypeName());
		if (faceMapParamValueClassFactory != null)
		{
			faceMapParamValue.setDelegate(true);
			faceMapParamValue = (com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet)faceMapParamValueClassFactory.create();
			faceMapParamValue.setDelegate(true);
			faceMapParamValue.setInstancePointer(new InstancePointer(faceMap));
		}
		com.earthview.world.spatial.geometry.CoordinateSequence sharedEdgesParamValue = new com.earthview.world.spatial.geometry.CoordinateSequence(CreatedWhenConstruct.CWC_NotToCreate);
		sharedEdgesParamValue.setDelegate(true);
		sharedEdgesParamValue.setInstancePointer(new InstancePointer(sharedEdges));
		IClassFactory sharedEdgesParamValueClassFactory = GlobalClassFactoryMap.get(sharedEdgesParamValue.getCppInstanceTypeName());
		if (sharedEdgesParamValueClassFactory != null)
		{
			sharedEdgesParamValue.setDelegate(true);
			sharedEdgesParamValue = (com.earthview.world.spatial.geometry.CoordinateSequence)sharedEdgesParamValueClassFactory.create();
			sharedEdgesParamValue.setDelegate(true);
			sharedEdgesParamValue.setInstancePointer(new InstancePointer(sharedEdges));
		}
		com.earthview.world.spatial.display.Icolor pNewColorParamValue = (pNewColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pNewColorParamValue != null)
		{
		pNewColorParamValue.setDelegate(true);
		pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		IClassFactory pNewColorParamValueClassFactory = GlobalClassFactoryMap.get(pNewColorParamValue.getCppInstanceTypeName());
		if (pNewColorParamValueClassFactory != null)
		{
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue = (com.earthview.world.spatial.display.Icolor)pNewColorParamValueClassFactory.create();
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		}
		}
		boolean returnValue = sliceAndClassify(anotherParamValue, faceMapParamValue, sharedEdgesParamValue, pNewColorParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean sliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(long pNativeObject, long another, long faceMap, long sharedEdges, long pNewColor);
	/**
	 * 用非封闭几何体对封闭几何体进行切片操作，并且对结果进行分类
	 * @return 处理是否成功
	 */
	public boolean sliceAndClassify(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet faceMap, com.earthview.world.spatial.geometry.CoordinateSequence sharedEdges, com.earthview.world.spatial.display.Icolor pNewColor)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long faceMapParamValue = faceMap.nativeObject.pointer;
		long sharedEdgesParamValue = sharedEdges.nativeObject.pointer;
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		boolean returnValue = sliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(this.nativeObject.pointer, anotherParamValue, faceMapParamValue, sharedEdgesParamValue, pNewColorParamValue);
		return returnValue;
	}
	native private boolean sliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_NoVirtual(long pNativeObject, long another, long faceMap, long sharedEdges, long pNewColor);
	protected boolean sliceAndClassify_NoVirtual(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet faceMap, com.earthview.world.spatial.geometry.CoordinateSequence sharedEdges, com.earthview.world.spatial.display.Icolor pNewColor)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long faceMapParamValue = faceMap.nativeObject.pointer;
		long sharedEdgesParamValue = sharedEdges.nativeObject.pointer;
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		boolean returnValue = sliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_NoVirtual(this.nativeObject.pointer, anotherParamValue, faceMapParamValue, sharedEdgesParamValue, pNewColorParamValue);
		return returnValue;
	}

	protected  boolean slice_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_callback(long another, long sliceA, long sliceB, long sharedEdges, long pNewColor)
	{
		com.earthview.world.geometry3d.SimpleRenderableEx anotherParamValue = (another == 0L ? null : new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate));
		if(anotherParamValue != null)
		{
		anotherParamValue.setDelegate(true);
		anotherParamValue.setInstancePointer(new InstancePointer(another));
		IClassFactory anotherParamValueClassFactory = GlobalClassFactoryMap.get(anotherParamValue.getCppInstanceTypeName());
		if (anotherParamValueClassFactory != null)
		{
			anotherParamValue.setDelegate(true);
			anotherParamValue = (com.earthview.world.geometry3d.SimpleRenderableEx)anotherParamValueClassFactory.create();
			anotherParamValue.setDelegate(true);
			anotherParamValue.setInstancePointer(new InstancePointer(another));
		}
		}
		com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet sliceAParamValue = new com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet(CreatedWhenConstruct.CWC_NotToCreate);
		sliceAParamValue.setDelegate(true);
		sliceAParamValue.setInstancePointer(new InstancePointer(sliceA));
		IClassFactory sliceAParamValueClassFactory = GlobalClassFactoryMap.get(sliceAParamValue.getCppInstanceTypeName());
		if (sliceAParamValueClassFactory != null)
		{
			sliceAParamValue.setDelegate(true);
			sliceAParamValue = (com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet)sliceAParamValueClassFactory.create();
			sliceAParamValue.setDelegate(true);
			sliceAParamValue.setInstancePointer(new InstancePointer(sliceA));
		}
		com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet sliceBParamValue = new com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet(CreatedWhenConstruct.CWC_NotToCreate);
		sliceBParamValue.setDelegate(true);
		sliceBParamValue.setInstancePointer(new InstancePointer(sliceB));
		IClassFactory sliceBParamValueClassFactory = GlobalClassFactoryMap.get(sliceBParamValue.getCppInstanceTypeName());
		if (sliceBParamValueClassFactory != null)
		{
			sliceBParamValue.setDelegate(true);
			sliceBParamValue = (com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet)sliceBParamValueClassFactory.create();
			sliceBParamValue.setDelegate(true);
			sliceBParamValue.setInstancePointer(new InstancePointer(sliceB));
		}
		com.earthview.world.spatial.geometry.CoordinateSequence sharedEdgesParamValue = new com.earthview.world.spatial.geometry.CoordinateSequence(CreatedWhenConstruct.CWC_NotToCreate);
		sharedEdgesParamValue.setDelegate(true);
		sharedEdgesParamValue.setInstancePointer(new InstancePointer(sharedEdges));
		IClassFactory sharedEdgesParamValueClassFactory = GlobalClassFactoryMap.get(sharedEdgesParamValue.getCppInstanceTypeName());
		if (sharedEdgesParamValueClassFactory != null)
		{
			sharedEdgesParamValue.setDelegate(true);
			sharedEdgesParamValue = (com.earthview.world.spatial.geometry.CoordinateSequence)sharedEdgesParamValueClassFactory.create();
			sharedEdgesParamValue.setDelegate(true);
			sharedEdgesParamValue.setInstancePointer(new InstancePointer(sharedEdges));
		}
		com.earthview.world.spatial.display.Icolor pNewColorParamValue = (pNewColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pNewColorParamValue != null)
		{
		pNewColorParamValue.setDelegate(true);
		pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		IClassFactory pNewColorParamValueClassFactory = GlobalClassFactoryMap.get(pNewColorParamValue.getCppInstanceTypeName());
		if (pNewColorParamValueClassFactory != null)
		{
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue = (com.earthview.world.spatial.display.Icolor)pNewColorParamValueClassFactory.create();
			pNewColorParamValue.setDelegate(true);
			pNewColorParamValue.setInstancePointer(new InstancePointer(pNewColor));
		}
		}
		boolean returnValue = slice(anotherParamValue, sliceAParamValue, sliceBParamValue, sharedEdgesParamValue, pNewColorParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean slice_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(long pNativeObject, long another, long sliceA, long sliceB, long sharedEdges, long pNewColor);
	/**
	 * 用封闭几何体对封闭进行切片操作，并且对结果进行分类：
	 * @return 处理是否成功
	 */
	public boolean slice(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet sliceA, com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet sliceB, com.earthview.world.spatial.geometry.CoordinateSequence sharedEdges, com.earthview.world.spatial.display.Icolor pNewColor)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long sliceAParamValue = sliceA.nativeObject.pointer;
		long sliceBParamValue = sliceB.nativeObject.pointer;
		long sharedEdgesParamValue = sharedEdges.nativeObject.pointer;
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		boolean returnValue = slice_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(this.nativeObject.pointer, anotherParamValue, sliceAParamValue, sliceBParamValue, sharedEdgesParamValue, pNewColorParamValue);
		return returnValue;
	}
	native private boolean slice_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_NoVirtual(long pNativeObject, long another, long sliceA, long sliceB, long sharedEdges, long pNewColor);
	protected boolean slice_NoVirtual(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet sliceA, com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet sliceB, com.earthview.world.spatial.geometry.CoordinateSequence sharedEdges, com.earthview.world.spatial.display.Icolor pNewColor)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long sliceAParamValue = sliceA.nativeObject.pointer;
		long sliceBParamValue = sliceB.nativeObject.pointer;
		long sharedEdgesParamValue = sharedEdges.nativeObject.pointer;
		long pNewColorParamValue = (pNewColor == null ? 0L : pNewColor.nativeObject.pointer);
		boolean returnValue = slice_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_NoVirtual(this.nativeObject.pointer, anotherParamValue, sliceAParamValue, sliceBParamValue, sharedEdgesParamValue, pNewColorParamValue);
		return returnValue;
	}

	native private void setSelectionColour_CColourValue(long pNativeObject, long colour);
	/// <summary>
	/// 设置选中时的高亮颜色				
	/// <param name=""></param>				
	/// <returns></returns>
	public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setSelectionColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private void setSelectionColour_CColourValue_NoVirtual(long pNativeObject, long colour);
	protected void setSelectionColour_NoVirtual(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setSelectionColour_CColourValue_NoVirtual(this.nativeObject.pointer, colourParamValue);
	}

	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
	/**
	 * 射线选择
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 选中的对象序号
	 * @param point 交点
	 * @return true:与射线相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}

	native private void renderSelection_void(long pNativeObject);
	/**
	 * 绘制选择对象
	 * @param  
	 */
	public void renderSelection()
	{
		renderSelection_void(this.nativeObject.pointer);
	}
	native private void renderSelection_void_NoVirtual(long pNativeObject);
	protected void renderSelection_NoVirtual()
	{
		renderSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清除选择
	 * @param  
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean setSelected_IntVector(long pNativeObject, long objIndics);
	/// <summary>
	/// 设置选中的对象				
	/// <param name="objIndics">选中的对象集合</param>				
	/// <returns></returns>
	public boolean setSelected(com.earthview.world.core.IntVector objIndics)
	{
		long objIndicsParamValue = objIndics.nativeObject.pointer;
		boolean returnValue = setSelected_IntVector(this.nativeObject.pointer, objIndicsParamValue);
		return returnValue;
	}
	native private boolean setSelected_IntVector_NoVirtual(long pNativeObject, long objIndics);
	protected boolean setSelected_NoVirtual(com.earthview.world.core.IntVector objIndics)
	{
		long objIndicsParamValue = objIndics.nativeObject.pointer;
		boolean returnValue = setSelected_IntVector_NoVirtual(this.nativeObject.pointer, objIndicsParamValue);
		return returnValue;
	}

	native private boolean startEditing_ev_uint32(long pNativeObject, long objectIndex);
	/**
	 * 开始编辑
	 * @param  
	 */
	public boolean startEditing(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		boolean returnValue = startEditing_ev_uint32(this.nativeObject.pointer, objectIndexParamValue);
		return returnValue;
	}
	native private boolean startEditing_ev_uint32_NoVirtual(long pNativeObject, long objectIndex);
	protected boolean startEditing_NoVirtual(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		boolean returnValue = startEditing_ev_uint32_NoVirtual(this.nativeObject.pointer, objectIndexParamValue);
		return returnValue;
	}

	native private void endEditing_void(long pNativeObject);
	/**
	 * 结束编辑
	 * @param  
	 */
	public void endEditing()
	{
		endEditing_void(this.nativeObject.pointer);
	}
	native private void endEditing_void_NoVirtual(long pNativeObject);
	protected void endEditing_NoVirtual()
	{
		endEditing_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getEditBoundingBox_void(long pNativeObject);
	/**
	 * 获得编辑包围盒
	 * @param  
	 */
	public com.earthview.world.graphic.EditBoundingBox getEditBoundingBox()
	{
		long returnValue = getEditBoundingBox_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EditBoundingBox __returnValue = new com.earthview.world.graphic.EditBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CEditBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EditBoundingBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditBoundingBox");
		}
		return __returnValue;
	}
	native private long getEditBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.EditBoundingBox getEditBoundingBox_NoVirtual()
	{
		long returnValue = getEditBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EditBoundingBox __returnValue = new com.earthview.world.graphic.EditBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CEditBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EditBoundingBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditBoundingBox");
		}
		return __returnValue;
	}

	native private boolean getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, long objectIndex, long matrix);
	/**
	 * 获得选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean getSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}
	native private boolean getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(long pNativeObject, long objectIndex, long matrix);
	protected boolean getSelectedObjectWorldMatrix_NoVirtual(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}

	native private boolean setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, long objectIndex, long matrix);
	/**
	 * 设置选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean setSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}
	native private boolean setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(long pNativeObject, long objectIndex, long matrix);
	protected boolean setSelectedObjectWorldMatrix_NoVirtual(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}

	protected  void flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback(long color, long hightLight_ms, long normally_ms, long flashCount)
	{
		com.earthview.world.graphic.ColourValue colorParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.graphic.ColourValue)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		long hightLight_msParamValue = hightLight_ms;
		long normally_msParamValue = normally_ms;
		long flashCountParamValue = flashCount;
		flash(colorParamValue, hightLight_msParamValue, normally_msParamValue, flashCountParamValue);
	}

	native private void flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long color, long hightLight_ms, long normally_ms, long flashCount);
	/**
	 * 闪烁
	 */
	public void flash(com.earthview.world.graphic.ColourValue color, long hightLight_ms, long normally_ms, long flashCount)
	{
		long colorParamValue = color.nativeObject.pointer;
		long hightLight_msParamValue = hightLight_ms;
		long normally_msParamValue = normally_ms;
		long flashCountParamValue = flashCount;
		flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, colorParamValue, hightLight_msParamValue, normally_msParamValue, flashCountParamValue);
	}
	native private void flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long color, long hightLight_ms, long normally_ms, long flashCount);
	protected void flash_NoVirtual(com.earthview.world.graphic.ColourValue color, long hightLight_ms, long normally_ms, long flashCount)
	{
		long colorParamValue = color.nativeObject.pointer;
		long hightLight_msParamValue = hightLight_ms;
		long normally_msParamValue = normally_ms;
		long flashCountParamValue = flashCount;
		flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, colorParamValue, hightLight_msParamValue, normally_msParamValue, flashCountParamValue);
	}

	protected  void endFlash_void_callback()
	{
		endFlash();
	}

	native private void endFlash_void(long pNativeObject);
	/**
	 * 结束闪烁
	 */
	public void endFlash()
	{
		endFlash_void(this.nativeObject.pointer);
	}
	native private void endFlash_void_NoVirtual(long pNativeObject);
	protected void endFlash_NoVirtual()
	{
		endFlash_void_NoVirtual(this.nativeObject.pointer);
	}

	public SimpleRenderableEx(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SimpleRenderableEx(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.SimpleRenderable.SimpleRenderableInternal getRenderable()
	{
		return super.getRenderable_NoVirtual();
	}
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		return super.getMaterial_NoVirtual();
	}
	public void setRenderOperation(com.earthview.world.graphic.RenderOperation rend)
	{
		super.setRenderOperation_NoVirtual(rend);
	}
	public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		super.getRenderOperation_NoVirtual(op);
	}
	public com.earthview.world.graphic.LightList getLights()
	{
		return super.getLights_NoVirtual();
	}
	public boolean getCastsShadows()
	{
		return super.getCastsShadows_NoVirtual();
	}
	public com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject getAnimableObjectPtr()
	{
		return super.getAnimableObjectPtr_NoVirtual();
	}
	/**
	 * 获取渲染队列ID
	 * @param  
	 */
	public short getRenderQueueId()
	{
		return super.getRenderQueueId_NoVirtual();
	}
	/**
	 * 通报创建者只能内部使用
	 * @param fact 实例
	 */
	public void _notifyCreator(com.earthview.world.graphic.MovableObjectFactory ref_fact)
	{
		super._notifyCreator_NoVirtual(ref_fact);
	}
	/**
	 * 获取创建者如果有的话，获取，只能在内部使用
	 * @param  
	 * @return 移动对象工厂类
	 */
	public com.earthview.world.graphic.MovableObjectFactory _getCreator()
	{
		return super._getCreator_NoVirtual();
	}
	/**
	 * 通报场景管理器只能内部使用
	 * @param man 场景管理者
	 */
	public void _notifyManager(com.earthview.world.graphic.SceneManager ref_mgr)
	{
		super._notifyManager_NoVirtual(ref_mgr);
	}
	/**
	 * 获取场景管理器
	 * @param  
	 * @return 管理者
	 */
	public com.earthview.world.graphic.SceneManager _getManager()
	{
		return super._getManager_NoVirtual();
	}
	/**
	 * 获取对象的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取移动对象类型的名称
	 * @param  
	 * @return 名称
	 */
	public String getMovableType()
	{
		return super.getMovableType_NoVirtual();
	}
	/**
	 * 获取父节点一个移动对象可以附属在一个场景节点或者骨骼节点上
	 * @param  
	 * @return 节点名称
	 */
	public com.earthview.world.graphic.Node getParentNode()
	{
		return super.getParentNode_NoVirtual();
	}
	/**
	 * 获取对象的场景父节点
	 * @param  
	 * @return 场景节点
	 */
	public com.earthview.world.graphic.SceneNode getParentSceneNode()
	{
		return super.getParentSceneNode_NoVirtual();
	}
	/**
	 * 判断父节点是否是骨骼节点
	 * @param  
	 * @return 成功，返回标签点，否则为场景节点
	 */
	public boolean isParentTagPoint()
	{
		return super.isParentTagPoint_NoVirtual();
	}
	/**
	 * 通报被挂接内部方法
	 * @param parent 父节点名称
	 * @param isTagPoint 是否挂接在节点下
	 */
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		super._notifyAttached_NoVirtual(ref_parent, isTagPoint);
	}
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent)
	{
		super._notifyAttached_NoVirtual(ref_parent);
	}
	/**
	 * 是否已挂接
	 * @param  
	 * @return 为真，挂接
	 */
	public boolean isAttached()
	{
		return super.isAttached_NoVirtual();
	}
	/**
	 * 将指定对象从父节点分离
	 * @param  
	 */
	public void detachFromParent()
	{
		super.detachFromParent_NoVirtual();
	}
	/**
	 * 指定节点是否是场景图中动态部分指定对象挂接到场景节点或标识点，而场景节点是当前场景图的活动部分
	 * @param  
	 */
	public boolean isInScene()
	{
		return super.isInScene_NoVirtual();
	}
	/**
	 * 通报被移动内部方法
	 * @param  
	 */
	public void _notifyMoved()
	{
		super._notifyMoved_NoVirtual();
	}
	/**
	 * 通报光源查询结束内部方法
	 * @param  
	 */
	public void _notifyLightsQueried(com.earthview.world.graphic.LightList lightList)
	{
		super._notifyLightsQueried_NoVirtual(lightList);
	}
	public void setLightQueriedListener(com.earthview.world.graphic.MovableObject.LightQueriedListener listener)
	{
		super.setLightQueriedListener_NoVirtual(listener);
	}
	public com.earthview.world.graphic.MovableObject.LightQueriedListener getLightQueriedListener()
	{
		return super.getLightQueriedListener_NoVirtual();
	}
	public long getLightListUpdated()
	{
		return super.getLightListUpdated_NoVirtual();
	}
	public void setLightListUpdated(long frame)
	{
		super.setLightListUpdated_NoVirtual(frame);
	}
	/**
	 * 通报当前相机内部方法
	 * @param cam 摄像机
	 */
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
	{
		super._notifyCurrentCamera_NoVirtual(ref_cam);
	}
	/**
	 * 获取模型坐标系下的包围盒
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
	{
		return super.getBoundingBox_NoVirtual();
	}
	/**
	 * 在世界空间中获取当前对象的边框球体
	 * @param derive 是否检索
	 */
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere(boolean derive)
	{
		return super.getWorldBoundingSphere_NoVirtual(derive);
	}
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere()
	{
		return super.getWorldBoundingSphere_NoVirtual();
	}
	/**
	 * 更新渲染队列内部方法
	 * @param queue 渲染队列
	 */
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		super._updateRenderQueue_NoVirtual(queue);
	}
	/**
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * 获取是否可见,与setVisible对应
	 * @param  
	 */
	public boolean getVisible()
	{
		return super.getVisible_NoVirtual();
	}
	/**
	 * 获取是否可见,严格的判断(裁剪判断、可视距离判断)
	 * @param  
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离上限
	 * @param dist 默认为0
	 */
	public void setRenderingMaxDistance(double dist)
	{
		super.setRenderingMaxDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离下限
	 * @param  
	 */
	public double getRenderingMaxDistance()
	{
		return super.getRenderingMaxDistance_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离下限
	 * @param dist 默认为0
	 */
	public void setRenderingMinDistance(double dist)
	{
		super.setRenderingMinDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离上限
	 * @param  
	 */
	public double getRenderingMinDistance()
	{
		return super.getRenderingMinDistance_NoVirtual();
	}
	/**
	 * 设置渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)必须先调用setUseMinPixelSize才能开启此功能
	 * @param pixelSize 像素大小
	 */
	public void setRenderingMinPixelSize(double pixelSize)
	{
		super.setRenderingMinPixelSize_NoVirtual(pixelSize);
	}
	/**
	 * 获得渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)
	 * @param  
	 * @return 像素大小
	 */
	public double getRenderingMinPixelSize()
	{
		return super.getRenderingMinPixelSize_NoVirtual();
	}
	/// <summary>
	/// 获得选中的对象				
	/// <param name=""></param>				
	/// <returns>选中的对象集合</returns>
	public com.earthview.world.core.IntVector getSelected()
	{
		return super.getSelected_NoVirtual();
	}
	/**
	 * 盒选择
	 * @param aabb 盒
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定盒相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		return super.selectBy_NoVirtual(aabb, prepareToRenderSelection, indexVec);
	}
	/**
	 * 球选择
	 * @param sphere 球
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定球相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		return super.selectBy_NoVirtual(sphere, prepareToRenderSelection, indexVec);
	}
	/**
	 * 选择组件
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 物体序号
	 * @param submeshIndex submesh序号
	 * @param instanceIndex instance序号
	 * @param segmentIndex 索引分段序号
	 * @param point 交点
	 * @return true:组件与射线相交;false:不相交
	 */
	public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		return super.selectComponentBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
	}
	/**
	 * 设置渲染队列组信息
	 * @param queueID 队列ID号
	 */
	public void setRenderQueueGroup(short queueID)
	{
		super.setRenderQueueGroup_NoVirtual(queueID);
	}
	/**
	 * 设置渲染队列组信息和队列优先级
	 * @param queueID 队列ID号
	 * @param priority 优先级
	 */
	public void setRenderQueueGroupAndPriority(short queueID, int priority)
	{
		super.setRenderQueueGroupAndPriority_NoVirtual(queueID, priority);
	}
	/**
	 * 获取该实体的渲染队列组
	 * @param  
	 */
	public short getRenderQueueGroup()
	{
		return super.getRenderQueueGroup_NoVirtual();
	}
	/**
	 * 获取父节点的全部变化信息
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform()
	{
		return super._getParentNodeFullTransform_NoVirtual();
	}
	/**
	 * 设置该对象的询问标识
	 * @param flags 
	 */
	public void setQueryFlags(long flags)
	{
		super.setQueryFlags_NoVirtual(flags);
	}
	/**
	 * 添加询问标识
	 * @param flags 
	 */
	public void addQueryFlags(long flags)
	{
		super.addQueryFlags_NoVirtual(flags);
	}
	/**
	 * 移除询问标识
	 * @param flags 
	 */
	public void removeQueryFlags(long flags)
	{
		super.removeQueryFlags_NoVirtual(flags);
	}
	/**
	 * 获取询问标识
	 * @param  
	 */
	public long getQueryFlags()
	{
		return super.getQueryFlags_NoVirtual();
	}
	/**
	 * 设置对象可见标识
	 * @param flags 
	 */
	public void setVisibilityFlags(long flags)
	{
		super.setVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 添加对象可见标识
	 * @param flags 
	 */
	public void addVisibilityFlags(long flags)
	{
		super.addVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 移除对象可见标识
	 * @param flags 
	 */
	public void removeVisibilityFlags(long flags)
	{
		super.removeVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 获取对象可见标识
	 * @param flags 
	 */
	public long getVisibilityFlags()
	{
		return super.getVisibilityFlags_NoVirtual();
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.MovableObject.MovableObjectListener ref_listener)
	{
		super.addListener_NoVirtual(ref_listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		return super.existListener_NoVirtual(listener);
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		return super.getListenerCount_NoVirtual();
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.MovableObject.MovableObjectListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 获取光源列表以距离可移动物体由近到远顺序排列
	 * @param  
	 */
	public com.earthview.world.graphic.LightList queryLights()
	{
		return super.queryLights_NoVirtual();
	}
	/**
	 * 获取光线掩码默认所有光源影响对象
	 * @param  
	 */
	public long getLightMask()
	{
		return super.getLightMask_NoVirtual();
	}
	/**
	 * 设置光线掩码
	 * @param lightMask 
	 */
	public void setLightMask(long lightMask)
	{
		super.setLightMask_NoVirtual(lightMask);
	}
	/**
	 * 获取指向该对象当前光列表
	 * @param  
	 */
	public com.earthview.world.graphic.LightList _getLightList()
	{
		return super._getLightList_NoVirtual();
	}
	/**
	 * 设置投射阴影
	 * @param enabled 
	 */
	public void setCastShadows(boolean enabled)
	{
		super.setCastShadows_NoVirtual(enabled);
	}
	/**
	 * 是否接收阴影
	 * @param  
	 */
	public boolean getReceivesShadows()
	{
		return super.getReceivesShadows_NoVirtual();
	}
	/**
	 * 获取可移动对象的类型标识
	 * @param  
	 */
	public long getTypeFlags()
	{
		return super.getTypeFlags_NoVirtual();
	}
	/**
	 * 访问可渲染对象允许迭代器遍历渲染实例，当被询问时，渲染对象将添加到渲染队列
	 * @param visitor 
	 * @param debugRenderables 为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括
	 */
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		super.visitRenderables_NoVirtual(visitor, debugRenderables);
	}
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		super.visitRenderables_NoVirtual(visitor);
	}
	/**
	 * 设置调试该对象是否启用
	 * @param  
	 */
	public void setDebugDisplayEnabled(boolean enabled)
	{
		super.setDebugDisplayEnabled_NoVirtual(enabled);
	}
	/**
	 * 是否调试该对象是否启用
	 * @param  
	 */
	public boolean isDebugDisplayEnabled()
	{
		return super.isDebugDisplayEnabled_NoVirtual();
	}
	public boolean getCastShadows()
	{
		return super.getCastShadows_NoVirtual();
	}
	public com.earthview.world.graphic.EdgeData getEdgeList()
	{
		return super.getEdgeList_NoVirtual();
	}
	public boolean hasEdgeList()
	{
		return super.hasEdgeList_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
	{
		return super.getWorldBoundingBox_NoVirtual(derive);
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox()
	{
		return super.getWorldBoundingBox_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds()
	{
		return super.getLightCapBounds_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
	{
		return super.getDarkCapBounds_NoVirtual(light, dirLightExtrusionDist);
	}
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
	{
		return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
	}
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
	{
		return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
	}
	public double getPointExtrusionDistance(com.earthview.world.graphic.Light l)
	{
		return super.getPointExtrusionDistance_NoVirtual(l);
	}
	public void updateEdgeListLightFacing(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.spatial.math.Vector4 lightPos)
	{
		super.updateEdgeListLightFacing_NoVirtual(edgeData, lightPos);
	}
	public void generateShadowVolume(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.Light light, com.earthview.world.graphic.ShadowCaster.ShadowRenderableList shadowRenderables, long flags)
	{
		super.generateShadowVolume_NoVirtual(edgeData, indexBuffer, light, shadowRenderables, flags);
	}
	public void extrudeBounds(com.earthview.world.spatial.math.AxisAlignedBox box, com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist)
	{
		super.extrudeBounds_NoVirtual(box, lightPos, extrudeDist);
	}
	
	native protected void register_unions_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, String method);
	native protected void register_intersect_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, String method);
	native protected void register_minus_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, String method);
	native protected void register_difference_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, String method);
	native protected void register_isIntersected_CSimpleRenderableEx(long pNativeObject, String method);
	native protected void register_isIntersected_CCurve(long pNativeObject, String method);
	native protected void register_contains_CPoint(long pNativeObject, String method);
	native protected void register_sliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(long pNativeObject, String method);
	native protected void register_slice_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(long pNativeObject, String method);
	native protected void register_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_endFlash_void(long pNativeObject, String method);
	native protected void register_getRenderable_void(long pNativeObject, String method);
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_setRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register_getLights_void(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_getCastsShadows_void(long pNativeObject, String method);
	native protected void register_getAnimableObjectPtr_void(long pNativeObject, String method);
	native protected void register_getRenderQueueId_void(long pNativeObject, String method);
	native protected void register__notifyCreator_CMovableObjectFactory(long pNativeObject, String method);
	native protected void register__getCreator_void(long pNativeObject, String method);
	native protected void register__notifyManager_CSceneManager(long pNativeObject, String method);
	native protected void register__getManager_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getMovableType_void(long pNativeObject, String method);
	native protected void register_getParentNode_void(long pNativeObject, String method);
	native protected void register_getParentSceneNode_void(long pNativeObject, String method);
	native protected void register_isParentTagPoint_void(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode_ev_bool(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode(long pNativeObject, String method);
	native protected void register_isAttached_void(long pNativeObject, String method);
	native protected void register_detachFromParent_void(long pNativeObject, String method);
	native protected void register_isInScene_void(long pNativeObject, String method);
	native protected void register__notifyMoved_void(long pNativeObject, String method);
	native protected void register__notifyLightsQueried_LightList(long pNativeObject, String method);
	native protected void register_setLightQueriedListener_CLightQueriedListener(long pNativeObject, String method);
	native protected void register_getLightQueriedListener_void(long pNativeObject, String method);
	native protected void register_getLightListUpdated_void(long pNativeObject, String method);
	native protected void register_setLightListUpdated_ev_uint32(long pNativeObject, String method);
	native protected void register__notifyCurrentCamera_CCamera(long pNativeObject, String method);
	native protected void register_getBoundingBox_void(long pNativeObject, String method);
	native protected void register_getBoundingRadius_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setRenderingMaxDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMaxDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinPixelSize_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinPixelSize_void(long pNativeObject, String method);
	native protected void register_setSelectionColour_CColourValue(long pNativeObject, String method);
	native protected void register_setSelected_IntVector(long pNativeObject, String method);
	native protected void register_getSelected_void(long pNativeObject, String method);
	native protected void register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectBy_CSphere_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_renderSelection_void(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_uint32(long pNativeObject, String method);
	native protected void register_endEditing_void(long pNativeObject, String method);
	native protected void register_getEditBoundingBox_void(long pNativeObject, String method);
	native protected void register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
	native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
	native protected void register__getParentNodeFullTransform_void(long pNativeObject, String method);
	native protected void register_setQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryFlags_void(long pNativeObject, String method);
	native protected void register_setVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getVisibilityFlags_void(long pNativeObject, String method);
	native protected void register_addListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_removeListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_existListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_getListenerCount_void(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_queryLights_void(long pNativeObject, String method);
	native protected void register_getLightMask_void(long pNativeObject, String method);
	native protected void register_setLightMask_ev_uint32(long pNativeObject, String method);
	native protected void register__getLightList_void(long pNativeObject, String method);
	native protected void register_setCastShadows_ev_bool(long pNativeObject, String method);
	native protected void register_getReceivesShadows_void(long pNativeObject, String method);
	native protected void register_getTypeFlags_void(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor(long pNativeObject, String method);
	native protected void register_setDebugDisplayEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_isDebugDisplayEnabled_void(long pNativeObject, String method);
	native protected void register_getCastShadows_void(long pNativeObject, String method);
	native protected void register_getEdgeList_void(long pNativeObject, String method);
	native protected void register_hasEdgeList_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_void(long pNativeObject, String method);
	native protected void register_getLightCapBounds_void(long pNativeObject, String method);
	native protected void register_getDarkCapBounds_CLight_Real(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, String method);
	native protected void register_getPointExtrusionDistance_CLight(long pNativeObject, String method);
	native protected void register_updateEdgeListLightFacing_CEdgeData_CVector4(long pNativeObject, String method);
	native protected void register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(long pNativeObject, String method);
	native protected void register_extrudeBounds_CAxisAlignedBox_CVector4_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_unions_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, "unions_CSimpleRenderableEx_IColor_CVector3_callback");
			this.register_intersect_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, "intersect_CSimpleRenderableEx_IColor_CVector3_callback");
			this.register_minus_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, "minus_CSimpleRenderableEx_IColor_CVector3_callback");
			this.register_difference_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, "difference_CSimpleRenderableEx_IColor_CVector3_callback");
			this.register_isIntersected_CSimpleRenderableEx(this.nativeObject.pointer, "isIntersected_CSimpleRenderableEx_callback");
			this.register_isIntersected_CCurve(this.nativeObject.pointer, "isIntersected_CCurve_callback");
			this.register_contains_CPoint(this.nativeObject.pointer, "contains_CPoint_callback");
			this.register_sliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(this.nativeObject.pointer, "sliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_callback");
			this.register_slice_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(this.nativeObject.pointer, "slice_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_callback");
			this.register_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_endFlash_void(this.nativeObject.pointer, "endFlash_void_callback");
			this.register_getRenderable_void(this.nativeObject.pointer, "getRenderable_void_callback");
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_setRenderOperation_CRenderOperation(this.nativeObject.pointer, "setRenderOperation_CRenderOperation_callback");
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
			this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
			this.register_getAnimableObjectPtr_void(this.nativeObject.pointer, "getAnimableObjectPtr_void_callback");
			this.register_getRenderQueueId_void(this.nativeObject.pointer, "getRenderQueueId_void_callback");
			this.register__notifyCreator_CMovableObjectFactory(this.nativeObject.pointer, "_notifyCreator_CMovableObjectFactory_callback");
			this.register__getCreator_void(this.nativeObject.pointer, "_getCreator_void_callback");
			this.register__notifyManager_CSceneManager(this.nativeObject.pointer, "_notifyManager_CSceneManager_callback");
			this.register__getManager_void(this.nativeObject.pointer, "_getManager_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getMovableType_void(this.nativeObject.pointer, "getMovableType_void_callback");
			this.register_getParentNode_void(this.nativeObject.pointer, "getParentNode_void_callback");
			this.register_getParentSceneNode_void(this.nativeObject.pointer, "getParentSceneNode_void_callback");
			this.register_isParentTagPoint_void(this.nativeObject.pointer, "isParentTagPoint_void_callback");
			this.register__notifyAttached_CNode_ev_bool(this.nativeObject.pointer, "_notifyAttached_CNode_ev_bool_callback");
			this.register__notifyAttached_CNode(this.nativeObject.pointer, "_notifyAttached_CNode_callback");
			this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
			this.register_detachFromParent_void(this.nativeObject.pointer, "detachFromParent_void_callback");
			this.register_isInScene_void(this.nativeObject.pointer, "isInScene_void_callback");
			this.register__notifyMoved_void(this.nativeObject.pointer, "_notifyMoved_void_callback");
			this.register__notifyLightsQueried_LightList(this.nativeObject.pointer, "_notifyLightsQueried_LightList_callback");
			this.register_setLightQueriedListener_CLightQueriedListener(this.nativeObject.pointer, "setLightQueriedListener_CLightQueriedListener_callback");
			this.register_getLightQueriedListener_void(this.nativeObject.pointer, "getLightQueriedListener_void_callback");
			this.register_getLightListUpdated_void(this.nativeObject.pointer, "getLightListUpdated_void_callback");
			this.register_setLightListUpdated_ev_uint32(this.nativeObject.pointer, "setLightListUpdated_ev_uint32_callback");
			this.register__notifyCurrentCamera_CCamera(this.nativeObject.pointer, "_notifyCurrentCamera_CCamera_callback");
			this.register_getBoundingBox_void(this.nativeObject.pointer, "getBoundingBox_void_callback");
			this.register_getBoundingRadius_void(this.nativeObject.pointer, "getBoundingRadius_void_callback");
			this.register_getWorldBoundingSphere_ev_bool(this.nativeObject.pointer, "getWorldBoundingSphere_ev_bool_callback");
			this.register_getWorldBoundingSphere_void(this.nativeObject.pointer, "getWorldBoundingSphere_void_callback");
			this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setRenderingMaxDistance_Real(this.nativeObject.pointer, "setRenderingMaxDistance_Real_callback");
			this.register_getRenderingMaxDistance_void(this.nativeObject.pointer, "getRenderingMaxDistance_void_callback");
			this.register_setRenderingMinDistance_Real(this.nativeObject.pointer, "setRenderingMinDistance_Real_callback");
			this.register_getRenderingMinDistance_void(this.nativeObject.pointer, "getRenderingMinDistance_void_callback");
			this.register_setRenderingMinPixelSize_Real(this.nativeObject.pointer, "setRenderingMinPixelSize_Real_callback");
			this.register_getRenderingMinPixelSize_void(this.nativeObject.pointer, "getRenderingMinPixelSize_void_callback");
			this.register_setSelectionColour_CColourValue(this.nativeObject.pointer, "setSelectionColour_CColourValue_callback");
			this.register_setSelected_IntVector(this.nativeObject.pointer, "setSelected_IntVector_callback");
			this.register_getSelected_void(this.nativeObject.pointer, "getSelected_void_callback");
			this.register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback");
			this.register_selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CAxisAlignedBox_ev_bool_IntVector_callback");
			this.register_selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CSphere_ev_bool_IntVector_callback");
			this.register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
			this.register_renderSelection_void(this.nativeObject.pointer, "renderSelection_void_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_startEditing_ev_uint32(this.nativeObject.pointer, "startEditing_ev_uint32_callback");
			this.register_endEditing_void(this.nativeObject.pointer, "endEditing_void_callback");
			this.register_getEditBoundingBox_void(this.nativeObject.pointer, "getEditBoundingBox_void_callback");
			this.register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
			this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
			this.register__getParentNodeFullTransform_void(this.nativeObject.pointer, "_getParentNodeFullTransform_void_callback");
			this.register_setQueryFlags_ev_uint32(this.nativeObject.pointer, "setQueryFlags_ev_uint32_callback");
			this.register_addQueryFlags_ev_uint32(this.nativeObject.pointer, "addQueryFlags_ev_uint32_callback");
			this.register_removeQueryFlags_ev_uint32(this.nativeObject.pointer, "removeQueryFlags_ev_uint32_callback");
			this.register_getQueryFlags_void(this.nativeObject.pointer, "getQueryFlags_void_callback");
			this.register_setVisibilityFlags_ev_uint32(this.nativeObject.pointer, "setVisibilityFlags_ev_uint32_callback");
			this.register_addVisibilityFlags_ev_uint32(this.nativeObject.pointer, "addVisibilityFlags_ev_uint32_callback");
			this.register_removeVisibilityFlags_ev_uint32(this.nativeObject.pointer, "removeVisibilityFlags_ev_uint32_callback");
			this.register_getVisibilityFlags_void(this.nativeObject.pointer, "getVisibilityFlags_void_callback");
			this.register_addListener_CMovableObjectListener(this.nativeObject.pointer, "addListener_CMovableObjectListener_callback");
			this.register_removeListener_CMovableObjectListener(this.nativeObject.pointer, "removeListener_CMovableObjectListener_callback");
			this.register_existListener_CMovableObjectListener(this.nativeObject.pointer, "existListener_CMovableObjectListener_callback");
			this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_queryLights_void(this.nativeObject.pointer, "queryLights_void_callback");
			this.register_getLightMask_void(this.nativeObject.pointer, "getLightMask_void_callback");
			this.register_setLightMask_ev_uint32(this.nativeObject.pointer, "setLightMask_ev_uint32_callback");
			this.register__getLightList_void(this.nativeObject.pointer, "_getLightList_void_callback");
			this.register_setCastShadows_ev_bool(this.nativeObject.pointer, "setCastShadows_ev_bool_callback");
			this.register_getReceivesShadows_void(this.nativeObject.pointer, "getReceivesShadows_void_callback");
			this.register_getTypeFlags_void(this.nativeObject.pointer, "getTypeFlags_void_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register_visitRenderables_CVisitor(this.nativeObject.pointer, "visitRenderables_CVisitor_callback");
			this.register_setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_callback");
			this.register_isDebugDisplayEnabled_void(this.nativeObject.pointer, "isDebugDisplayEnabled_void_callback");
			this.register_getCastShadows_void(this.nativeObject.pointer, "getCastShadows_void_callback");
			this.register_getEdgeList_void(this.nativeObject.pointer, "getEdgeList_void_callback");
			this.register_hasEdgeList_void(this.nativeObject.pointer, "hasEdgeList_void_callback");
			this.register_getWorldBoundingBox_ev_bool(this.nativeObject.pointer, "getWorldBoundingBox_ev_bool_callback");
			this.register_getWorldBoundingBox_void(this.nativeObject.pointer, "getWorldBoundingBox_void_callback");
			this.register_getLightCapBounds_void(this.nativeObject.pointer, "getLightCapBounds_void_callback");
			this.register_getDarkCapBounds_CLight_Real(this.nativeObject.pointer, "getDarkCapBounds_CLight_Real_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback");
			this.register_getPointExtrusionDistance_CLight(this.nativeObject.pointer, "getPointExtrusionDistance_CLight_callback");
			this.register_updateEdgeListLightFacing_CEdgeData_CVector4(this.nativeObject.pointer, "updateEdgeListLightFacing_CEdgeData_CVector4_callback");
			this.register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.nativeObject.pointer, "generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback");
			this.register_extrudeBounds_CAxisAlignedBox_CVector4_Real(this.nativeObject.pointer, "extrudeBounds_CAxisAlignedBox_CVector4_Real_callback");
		}
	}
	
	public static SimpleRenderableEx fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SimpleRenderableEx obj = null;
 		if(baseObj instanceof SimpleRenderableEx)
		{
			obj = (SimpleRenderableEx)baseObj;
		} else {
			obj = new SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSimpleRenderableEx");
			obj.increaseCast();
		}

		return obj;
	}
}
