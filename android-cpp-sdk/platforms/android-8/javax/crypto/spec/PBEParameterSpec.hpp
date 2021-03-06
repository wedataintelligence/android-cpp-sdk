/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.spec.PBEParameterSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_PBEPARAMETERSPEC_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_SPEC_PBEPARAMETERSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }


#include <java/lang/Object.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace javax { namespace crypto { namespace spec {

	class PBEParameterSpec;
	class PBEParameterSpec
		: public object<PBEParameterSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit PBEParameterSpec(jobject jobj)
		: object<PBEParameterSpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::AlgorithmParameterSpec>() const;


		PBEParameterSpec(local_ref< array<jbyte,1> > const&, jint);
		local_ref< array<jbyte,1> > getSalt();
		jint getIterationCount();
	}; //class PBEParameterSpec

} //namespace spec
} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_PBEPARAMETERSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_PBEPARAMETERSPEC_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_SPEC_PBEPARAMETERSPEC_HPP_IMPL

namespace j2cpp {



javax::crypto::spec::PBEParameterSpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::crypto::spec::PBEParameterSpec::operator local_ref<java::security::spec::AlgorithmParameterSpec>() const
{
	return local_ref<java::security::spec::AlgorithmParameterSpec>(get_jobject());
}


javax::crypto::spec::PBEParameterSpec::PBEParameterSpec(local_ref< array<jbyte,1> > const &a0, jint a1)
: object<javax::crypto::spec::PBEParameterSpec>(
	call_new_object<
		javax::crypto::spec::PBEParameterSpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::PBEParameterSpec::J2CPP_METHOD_NAME(0),
		javax::crypto::spec::PBEParameterSpec::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< array<jbyte,1> > javax::crypto::spec::PBEParameterSpec::getSalt()
{
	return call_method<
		javax::crypto::spec::PBEParameterSpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::PBEParameterSpec::J2CPP_METHOD_NAME(1),
		javax::crypto::spec::PBEParameterSpec::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array<jbyte,1> >
	>(get_jobject());
}

jint javax::crypto::spec::PBEParameterSpec::getIterationCount()
{
	return call_method<
		javax::crypto::spec::PBEParameterSpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::PBEParameterSpec::J2CPP_METHOD_NAME(2),
		javax::crypto::spec::PBEParameterSpec::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::crypto::spec::PBEParameterSpec,"javax/crypto/spec/PBEParameterSpec")
J2CPP_DEFINE_METHOD(javax::crypto::spec::PBEParameterSpec,0,"<init>","([BI)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::PBEParameterSpec,1,"getSalt","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::spec::PBEParameterSpec,2,"getIterationCount","()I")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_PBEPARAMETERSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
