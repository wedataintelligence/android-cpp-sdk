/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.ssl.SSLEngine
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_DECL


namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLEngineResult; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { namespace SSLEngineResult_ { class HandshakeStatus; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/String.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <javax/net/ssl/SSLEngineResult.hpp>
#include <javax/net/ssl/SSLSession.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLEngine;
	class SSLEngine
		: public object<SSLEngine>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)

		explicit SSLEngine(jobject jobj)
		: object<SSLEngine>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getPeerHost();
		jint getPeerPort();
		void beginHandshake();
		void closeInbound();
		void closeOutbound();
		local_ref< java::lang::Runnable > getDelegatedTask();
		local_ref< array< local_ref< java::lang::String >, 1> > getEnabledCipherSuites();
		local_ref< array< local_ref< java::lang::String >, 1> > getEnabledProtocols();
		jboolean getEnableSessionCreation();
		local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > getHandshakeStatus();
		jboolean getNeedClientAuth();
		local_ref< javax::net::ssl::SSLSession > getSession();
		local_ref< array< local_ref< java::lang::String >, 1> > getSupportedCipherSuites();
		local_ref< array< local_ref< java::lang::String >, 1> > getSupportedProtocols();
		jboolean getUseClientMode();
		jboolean getWantClientAuth();
		jboolean isInboundDone();
		jboolean isOutboundDone();
		void setEnabledCipherSuites(local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		void setEnabledProtocols(local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		void setEnableSessionCreation(jboolean);
		void setNeedClientAuth(jboolean);
		void setUseClientMode(jboolean);
		void setWantClientAuth(jboolean);
		local_ref< javax::net::ssl::SSLEngineResult > unwrap(local_ref< java::nio::ByteBuffer >  const&, local_ref< array< local_ref< java::nio::ByteBuffer >, 1> >  const&, jint, jint);
		local_ref< javax::net::ssl::SSLEngineResult > wrap(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> >  const&, jint, jint, local_ref< java::nio::ByteBuffer >  const&);
		local_ref< javax::net::ssl::SSLEngineResult > unwrap(local_ref< java::nio::ByteBuffer >  const&, local_ref< java::nio::ByteBuffer >  const&);
		local_ref< javax::net::ssl::SSLEngineResult > unwrap(local_ref< java::nio::ByteBuffer >  const&, local_ref< array< local_ref< java::nio::ByteBuffer >, 1> >  const&);
		local_ref< javax::net::ssl::SSLEngineResult > wrap(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> >  const&, local_ref< java::nio::ByteBuffer >  const&);
		local_ref< javax::net::ssl::SSLEngineResult > wrap(local_ref< java::nio::ByteBuffer >  const&, local_ref< java::nio::ByteBuffer >  const&);
	}; //class SSLEngine

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_IMPL

namespace j2cpp {



javax::net::ssl::SSLEngine::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



local_ref< java::lang::String > javax::net::ssl::SSLEngine::getPeerHost()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(2),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint javax::net::ssl::SSLEngine::getPeerPort()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(3),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

void javax::net::ssl::SSLEngine::beginHandshake()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(4),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

void javax::net::ssl::SSLEngine::closeInbound()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(5),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

void javax::net::ssl::SSLEngine::closeOutbound()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(6),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject());
}

local_ref< java::lang::Runnable > javax::net::ssl::SSLEngine::getDelegatedTask()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(7),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Runnable >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > javax::net::ssl::SSLEngine::getEnabledCipherSuites()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(8),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > javax::net::ssl::SSLEngine::getEnabledProtocols()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(9),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject());
}

jboolean javax::net::ssl::SSLEngine::getEnableSessionCreation()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(10),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject());
}

local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > javax::net::ssl::SSLEngine::getHandshakeStatus()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(11),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus >
	>(get_jobject());
}

jboolean javax::net::ssl::SSLEngine::getNeedClientAuth()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(12),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject());
}

local_ref< javax::net::ssl::SSLSession > javax::net::ssl::SSLEngine::getSession()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(13),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< javax::net::ssl::SSLSession >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > javax::net::ssl::SSLEngine::getSupportedCipherSuites()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(14),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > javax::net::ssl::SSLEngine::getSupportedProtocols()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(15),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject());
}

jboolean javax::net::ssl::SSLEngine::getUseClientMode()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(16),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject());
}

jboolean javax::net::ssl::SSLEngine::getWantClientAuth()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(17),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject());
}

jboolean javax::net::ssl::SSLEngine::isInboundDone()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(18),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(18), 
		jboolean
	>(get_jobject());
}

jboolean javax::net::ssl::SSLEngine::isOutboundDone()
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(19),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(19), 
		jboolean
	>(get_jobject());
}

void javax::net::ssl::SSLEngine::setEnabledCipherSuites(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(20),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

void javax::net::ssl::SSLEngine::setEnabledProtocols(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(21),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0);
}

void javax::net::ssl::SSLEngine::setEnableSessionCreation(jboolean a0)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(22),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0);
}

void javax::net::ssl::SSLEngine::setNeedClientAuth(jboolean a0)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(23),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0);
}

void javax::net::ssl::SSLEngine::setUseClientMode(jboolean a0)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(24),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject(), a0);
}

void javax::net::ssl::SSLEngine::setWantClientAuth(jboolean a0)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(25),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(get_jobject(), a0);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::unwrap(local_ref< java::nio::ByteBuffer > const &a0, local_ref< array< local_ref< java::nio::ByteBuffer >, 1> > const &a1, jint a2, jint a3)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(26),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< javax::net::ssl::SSLEngineResult >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::wrap(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> > const &a0, jint a1, jint a2, local_ref< java::nio::ByteBuffer > const &a3)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(27),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< javax::net::ssl::SSLEngineResult >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::unwrap(local_ref< java::nio::ByteBuffer > const &a0, local_ref< java::nio::ByteBuffer > const &a1)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(28),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< javax::net::ssl::SSLEngineResult >
	>(get_jobject(), a0, a1);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::unwrap(local_ref< java::nio::ByteBuffer > const &a0, local_ref< array< local_ref< java::nio::ByteBuffer >, 1> > const &a1)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(29),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< javax::net::ssl::SSLEngineResult >
	>(get_jobject(), a0, a1);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::wrap(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> > const &a0, local_ref< java::nio::ByteBuffer > const &a1)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(30),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< javax::net::ssl::SSLEngineResult >
	>(get_jobject(), a0, a1);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::wrap(local_ref< java::nio::ByteBuffer > const &a0, local_ref< java::nio::ByteBuffer > const &a1)
{
	return call_method<
		javax::net::ssl::SSLEngine::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLEngine::J2CPP_METHOD_NAME(31),
		javax::net::ssl::SSLEngine::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< javax::net::ssl::SSLEngineResult >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLEngine,"javax/net/ssl/SSLEngine")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,1,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,2,"getPeerHost","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,3,"getPeerPort","()I")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,4,"beginHandshake","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,5,"closeInbound","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,6,"closeOutbound","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,7,"getDelegatedTask","()Ljava/lang/Runnable;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,8,"getEnabledCipherSuites","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,9,"getEnabledProtocols","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,10,"getEnableSessionCreation","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,11,"getHandshakeStatus","()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,12,"getNeedClientAuth","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,13,"getSession","()Ljavax/net/ssl/SSLSession;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,14,"getSupportedCipherSuites","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,15,"getSupportedProtocols","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,16,"getUseClientMode","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,17,"getWantClientAuth","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,18,"isInboundDone","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,19,"isOutboundDone","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,20,"setEnabledCipherSuites","([java.lang.String)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,21,"setEnabledProtocols","([java.lang.String)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,22,"setEnableSessionCreation","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,23,"setNeedClientAuth","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,24,"setUseClientMode","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,25,"setWantClientAuth","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,26,"unwrap","(Ljava/nio/ByteBuffer;[java.nio.ByteBufferII)Ljavax/net/ssl/SSLEngineResult;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,27,"wrap","([java.nio.ByteBufferIILjava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,28,"unwrap","(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,29,"unwrap","(Ljava/nio/ByteBuffer;[java.nio.ByteBuffer)Ljavax/net/ssl/SSLEngineResult;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,30,"wrap","([java.nio.ByteBufferLjava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,31,"wrap","(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
