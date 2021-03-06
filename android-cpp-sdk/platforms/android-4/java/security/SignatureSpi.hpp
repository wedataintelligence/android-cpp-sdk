/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.SignatureSpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SIGNATURESPI_HPP_DECL
#define J2CPP_JAVA_SECURITY_SIGNATURESPI_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace security {

	class SignatureSpi;
	class SignatureSpi
		: public object<SignatureSpi>
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
		J2CPP_DECLARE_FIELD(0)

		explicit SignatureSpi(jobject jobj)
		: object<SignatureSpi>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		SignatureSpi();
		local_ref< java::lang::Object > clone();

	}; //class SignatureSpi

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SIGNATURESPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SIGNATURESPI_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SIGNATURESPI_HPP_IMPL

namespace j2cpp {



java::security::SignatureSpi::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::SignatureSpi::SignatureSpi()
: object<java::security::SignatureSpi>(
	call_new_object<
		java::security::SignatureSpi::J2CPP_CLASS_NAME,
		java::security::SignatureSpi::J2CPP_METHOD_NAME(0),
		java::security::SignatureSpi::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}
















local_ref< java::lang::Object > java::security::SignatureSpi::clone()
{
	return call_method<
		java::security::SignatureSpi::J2CPP_CLASS_NAME,
		java::security::SignatureSpi::J2CPP_METHOD_NAME(15),
		java::security::SignatureSpi::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::Object >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(java::security::SignatureSpi,"java/security/SignatureSpi")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,1,"engineInitVerify","(Ljava/security/PublicKey;)V")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,2,"engineInitSign","(Ljava/security/PrivateKey;)V")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,3,"engineInitSign","(Ljava/security/PrivateKey;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,4,"engineUpdate","(B)V")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,5,"engineUpdate","([BII)V")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,6,"engineUpdate","(Ljava/nio/ByteBuffer;)V")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,7,"engineSign","()[B")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,8,"engineSign","([BII)I")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,9,"engineVerify","([B)Z")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,10,"engineVerify","([BII)Z")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,11,"engineSetParameter","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,12,"engineSetParameter","(Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,13,"engineGetParameters","()Ljava/security/AlgorithmParameters;")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,14,"engineGetParameter","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::SignatureSpi,15,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(java::security::SignatureSpi,0,"appRandom","Ljava/security/SecureRandom;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SIGNATURESPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
