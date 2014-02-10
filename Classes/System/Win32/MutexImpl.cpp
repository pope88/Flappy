////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <System/Win32/MutexImpl.h>


namespace System
{
namespace priv
{
////////////////////////////////////////////////////////////
MutexImpl::MutexImpl()
{
    InitializeCriticalSection(&myMutex);
}


////////////////////////////////////////////////////////////
MutexImpl::~MutexImpl()
{
    DeleteCriticalSection(&myMutex);
}


////////////////////////////////////////////////////////////
void MutexImpl::Lock()
{
    EnterCriticalSection(&myMutex);
}


////////////////////////////////////////////////////////////
void MutexImpl::Unlock()
{
    LeaveCriticalSection(&myMutex);
}

} // namespace priv

} // namespace System
