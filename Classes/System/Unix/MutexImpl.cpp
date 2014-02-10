////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <System/Unix/MutexImpl.h>


namespace System
{
namespace priv
{
////////////////////////////////////////////////////////////
MutexImpl::MutexImpl()
{
    pthread_mutex_init(&myMutex, NULL);
}


////////////////////////////////////////////////////////////
MutexImpl::~MutexImpl()
{
    pthread_mutex_destroy(&myMutex);
}


////////////////////////////////////////////////////////////
void MutexImpl::Lock()
{
    pthread_mutex_lock(&myMutex);
}


////////////////////////////////////////////////////////////
void MutexImpl::Unlock()
{
    pthread_mutex_unlock(&myMutex);
}

} // namespace priv

} // namespace System