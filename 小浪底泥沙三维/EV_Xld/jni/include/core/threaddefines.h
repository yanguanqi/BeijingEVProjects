#ifndef __ThreadDefines_H__
#define __ThreadDefines_H__
#pragma once
#include "core/mutex.h"
#include "core/readwritelock.h"
#include "core/thread.h"
#include "core/memoryallocatorconfig.h"
#if EV_THREAD_SUPPORT
#define EV_AUTO_MUTEX_NAME mutex
#define EV_AUTO_MUTEX mutable EarthView::World::Core::CRecursiveMutex EV_AUTO_MUTEX_NAME ;
#define EV_LOCK_AUTO_MUTEX EarthView::World::Core::CMutexLocker evAutoMutexLocker(&EV_AUTO_MUTEX_NAME);
#define EV_MUTEX(name) mutable EarthView::World::Core::CRecursiveMutex name;
#define EV_STATIC_MUTEX(name) static EarthView::World::Core::CRecursiveMutex name;
#define EV_STATIC_MUTEX_INSTANCE(name) EarthView::World::Core::CRecursiveMutex name;
#define EV_LOCK_MUTEX(name) EarthView::World::Core::CMutexLocker nameLocker(&name);
#define EV_LOCK_MUTEX_NAMED(mutexName, lockName) EarthView::World::Core::CMutexLocker lockName(&mutexName);

///指针实现
#define EV_AUTO_SHARED_MUTEX        mutable EarthView::World::Core::CRecursiveMutex *EV_AUTO_MUTEX_NAME;
#define EV_LOCK_AUTO_SHARED_MUTEX   EV_ASSERT(EV_AUTO_MUTEX_NAME); EarthView::World::Core::CMutexLocker evAutoMutexLocker(EV_AUTO_MUTEX_NAME);
#define EV_NEW_AUTO_SHARED_MUTEX    EV_ASSERT(!EV_AUTO_MUTEX_NAME); EV_AUTO_MUTEX_NAME = new EarthView::World::Core::CRecursiveMutex();
#define EV_DELETE_AUTO_SHARED_MUTEX  EV_ASSERT(EV_AUTO_MUTEX_NAME); delete EV_AUTO_MUTEX_NAME;
#define EV_COPY_AUTO_SHARED_MUTEX(from)  EV_ASSERT(!EV_AUTO_MUTEX_NAME); EV_AUTO_MUTEX_NAME = from;
#define EV_SET_AUTO_SHARED_MUTEX_NULL    EV_AUTO_MUTEX_NAME = 0;
#define EV_MUTEX_CONDITIONAL(name)   if (name)
#define EV_RW_MUTEX(name)              mutable EarthView::World::Core::CReadWriteLock name;
#define EV_LOCK_RW_MUTEX_READ(name)    EarthView::World::Core::CReadLocker name##locker(&name);
#define EV_LOCK_RW_MUTEX_WRITE(name)    EarthView::World::Core::CWriteLocker name##locker(&name);
/// Thread-local pointer
#define EV_THREAD_POINTER(T, var) EarthView::World::Core::CThreadLocalStore<T> var
#define EV_THREAD_POINTER_INIT(var) var()
#define EV_THREAD_POINTER_VAR(T, var) EarthView::World::Core::CThreadLocalStore<T> var
#define EV_THREAD_POINTER_SET(var, expr) var.setValue(expr)
#define EV_THREAD_POINTER_GET(var) var.getValue()
#define EV_THREAD_POINTER_DELETE(var) var.reset()
/// Thread objects and related functions
#define EV_THREAD_TYPE EarthView::World::Core::CThread
#define EV_THREAD_CREATE(name, worker) EarthView::World::Core::CThread *name = EV_NEW_T(EarthView::World::Core::CThread)(); name->work(worker);
#define EV_THREAD_DESTROY(name) EV_DELETE_T(name, CThread);
#define EV_THREAD_HARDWARE_CONCURRENCY 2
#define EV_THREAD_CURRENT_ID EarthView::World::Core::CThread::getThreadID()
#define EV_THREAD_WORKER_INHERIT : public EarthView::World::Core::CThreadFunc
#define EV_THREAD_SYNCHRONISER(sync) EarthView::World::Core::CCondition sync;
#define EV_THREAD_WAIT(sync, mutex, lock) sync.wait(mutex);
#define EV_THREAD_NOTIFY_ONE(sync) sync.notify_one();
#define EV_THREAD_NOTIFY_ALL(sync) sync.notify_all();
/// Utility
#define EV_THREAD_SLEEP(ms) EarthView::World::Core::CThread::sleep(ms);
#else
#define EV_AUTO_MUTEX
#define EV_LOCK_AUTO_MUTEX
#define EV_MUTEX(name)
#define EV_STATIC_MUTEX(name)
#define EV_STATIC_MUTEX_INSTANCE(name)
#define EV_LOCK_MUTEX(name)
#define EV_LOCK_MUTEX_NAMED(mutexName, lockName)
#define EV_AUTO_SHARED_MUTEX
#define EV_LOCK_AUTO_SHARED_MUTEX
#define EV_NEW_AUTO_SHARED_MUTEX
#define EV_DELETE_AUTO_SHARED_MUTEX
#define EV_COPY_AUTO_SHARED_MUTEX(from)
#define EV_SET_AUTO_SHARED_MUTEX_NULL
#define EV_MUTEX_CONDITIONAL(name) if(true)
#define EV_RW_MUTEX(name)
#define EV_LOCK_RW_MUTEX_READ(name)
#define EV_LOCK_RW_MUTEX_WRITE(name)
#define EV_THREAD_SYNCHRONISER(sync)

#ifndef EV_OS_ANDROID
#define EV_THREAD_WAIT(sync, lock)
#else
#define EV_THREAD_WAIT(sync, mutex, lock)
#endif

#define EV_THREAD_NOTIFY_ONE(sync)
#define EV_THREAD_NOTIFY_ALL(sync)
#define EV_THREAD_POINTER(T, var) T* var
#define EV_THREAD_POINTER_INIT(var) var(0)
#define EV_THREAD_POINTER_VAR(T, var) T* var = 0
#define EV_THREAD_POINTER_SET(var, expr) var = expr
#define EV_THREAD_POINTER_GET(var) var
#define EV_THREAD_POINTER_DELETE(var) { EV_DELETE var; var = 0; }
#define EV_THREAD_SLEEP(ms)
#define EV_THREAD_WORKER_INHERIT
#endif
#endif
