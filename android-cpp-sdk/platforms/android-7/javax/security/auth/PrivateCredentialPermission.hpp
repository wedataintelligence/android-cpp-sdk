/*================================================================================
  code generated by: java2cpp
  class: javax.security.auth.PrivateCredentialPermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION_HPP_DECL
#define J2CPP_JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }
namespace j2cpp { namespace java { namespace security { class PermissionCollection; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Permission.hpp>
#include <java/security/PermissionCollection.hpp>


namespace j2cpp {

namespace javax { namespace security { namespace auth {

	class PrivateCredentialPermission;
	class PrivateCredentialPermission
		: public cpp_object<PrivateCredentialPermission>
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

		explicit PrivateCredentialPermission(jobject jobj)
		: cpp_object<PrivateCredentialPermission>(jobj)
		{
		}

		operator local_ref<java::security::Permission>() const;


		PrivateCredentialPermission(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< cpp_object_array<java::lang::String, 2> > getPrincipals();
		local_ref< java::lang::String > getActions();
		local_ref< java::lang::String > getCredentialClass();
		cpp_int hashCode();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_boolean implies(local_ref< java::security::Permission > const&);
		local_ref< java::security::PermissionCollection > newPermissionCollection();
	}; //class PrivateCredentialPermission

} //namespace auth
} //namespace security
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION_HPP_IMPL
#define J2CPP_JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION_HPP_IMPL

namespace j2cpp {



javax::security::auth::PrivateCredentialPermission::operator local_ref<java::security::Permission>() const
{
	return local_ref<java::security::Permission>(get_jtype());
}


javax::security::auth::PrivateCredentialPermission::PrivateCredentialPermission(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: cpp_object<javax::security::auth::PrivateCredentialPermission>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::security::auth::PrivateCredentialPermission::J2CPP_CLASS_NAME>(),
		get_method_id<javax::security::auth::PrivateCredentialPermission::J2CPP_CLASS_NAME, javax::security::auth::PrivateCredentialPermission::J2CPP_METHOD_NAME(0), javax::security::auth::PrivateCredentialPermission::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


local_ref< cpp_object_array<java::lang::String, 2> > javax::security::auth::PrivateCredentialPermission::getPrincipals()
{
	return local_ref< cpp_object_array<java::lang::String, 2> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > javax::security::auth::PrivateCredentialPermission::getActions()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > javax::security::auth::PrivateCredentialPermission::getCredentialClass()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int javax::security::auth::PrivateCredentialPermission::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean javax::security::auth::PrivateCredentialPermission::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean javax::security::auth::PrivateCredentialPermission::implies(local_ref< java::security::Permission > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::security::PermissionCollection > javax::security::auth::PrivateCredentialPermission::newPermissionCollection()
{
	return local_ref< java::security::PermissionCollection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::security::auth::PrivateCredentialPermission,"javax/security/auth/PrivateCredentialPermission")
J2CPP_DEFINE_METHOD(javax::security::auth::PrivateCredentialPermission,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::security::auth::PrivateCredentialPermission,1,"getPrincipals","()[[java.lang.String")
J2CPP_DEFINE_METHOD(javax::security::auth::PrivateCredentialPermission,2,"getActions","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::security::auth::PrivateCredentialPermission,3,"getCredentialClass","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::security::auth::PrivateCredentialPermission,4,"hashCode","()I")
J2CPP_DEFINE_METHOD(javax::security::auth::PrivateCredentialPermission,5,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(javax::security::auth::PrivateCredentialPermission,6,"implies","(Ljava/security/Permission;)Z")
J2CPP_DEFINE_METHOD(javax::security::auth::PrivateCredentialPermission,7,"newPermissionCollection","()Ljava/security/PermissionCollection;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION