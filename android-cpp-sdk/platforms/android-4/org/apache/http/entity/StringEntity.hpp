/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.entity.StringEntity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_STRINGENTITY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_STRINGENTITY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class AbstractHttpEntity; } } } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/HttpEntity.hpp>
#include <org/apache/http/entity/AbstractHttpEntity.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace entity {

	class StringEntity;
	class StringEntity
		: public object<StringEntity>
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
		J2CPP_DECLARE_FIELD(0)

		explicit StringEntity(jobject jobj)
		: object<StringEntity>(jobj)
		{
		}

		operator local_ref<org::apache::http::HttpEntity>() const;
		operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;


		StringEntity(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		StringEntity(local_ref< java::lang::String > const&);
		jboolean isRepeatable();
		jlong getContentLength();
		local_ref< java::io::InputStream > getContent();
		void writeTo(local_ref< java::io::OutputStream >  const&);
		jboolean isStreaming();
		local_ref< java::lang::Object > clone();

	}; //class StringEntity

} //namespace entity
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_STRINGENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_STRINGENTITY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_STRINGENTITY_HPP_IMPL

namespace j2cpp {



org::apache::http::entity::StringEntity::operator local_ref<org::apache::http::HttpEntity>() const
{
	return local_ref<org::apache::http::HttpEntity>(get_jobject());
}

org::apache::http::entity::StringEntity::operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const
{
	return local_ref<org::apache::http::entity::AbstractHttpEntity>(get_jobject());
}

org::apache::http::entity::StringEntity::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

org::apache::http::entity::StringEntity::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::entity::StringEntity::StringEntity(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<org::apache::http::entity::StringEntity>(
	call_new_object<
		org::apache::http::entity::StringEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::StringEntity::J2CPP_METHOD_NAME(0),
		org::apache::http::entity::StringEntity::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



org::apache::http::entity::StringEntity::StringEntity(local_ref< java::lang::String > const &a0)
: object<org::apache::http::entity::StringEntity>(
	call_new_object<
		org::apache::http::entity::StringEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::StringEntity::J2CPP_METHOD_NAME(1),
		org::apache::http::entity::StringEntity::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jboolean org::apache::http::entity::StringEntity::isRepeatable()
{
	return call_method<
		org::apache::http::entity::StringEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::StringEntity::J2CPP_METHOD_NAME(2),
		org::apache::http::entity::StringEntity::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

jlong org::apache::http::entity::StringEntity::getContentLength()
{
	return call_method<
		org::apache::http::entity::StringEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::StringEntity::J2CPP_METHOD_NAME(3),
		org::apache::http::entity::StringEntity::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>(get_jobject());
}

local_ref< java::io::InputStream > org::apache::http::entity::StringEntity::getContent()
{
	return call_method<
		org::apache::http::entity::StringEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::StringEntity::J2CPP_METHOD_NAME(4),
		org::apache::http::entity::StringEntity::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::io::InputStream >
	>(get_jobject());
}

void org::apache::http::entity::StringEntity::writeTo(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		org::apache::http::entity::StringEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::StringEntity::J2CPP_METHOD_NAME(5),
		org::apache::http::entity::StringEntity::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

jboolean org::apache::http::entity::StringEntity::isStreaming()
{
	return call_method<
		org::apache::http::entity::StringEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::StringEntity::J2CPP_METHOD_NAME(6),
		org::apache::http::entity::StringEntity::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::entity::StringEntity::clone()
{
	return call_method<
		org::apache::http::entity::StringEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::StringEntity::J2CPP_METHOD_NAME(7),
		org::apache::http::entity::StringEntity::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::entity::StringEntity,"org/apache/http/entity/StringEntity")
J2CPP_DEFINE_METHOD(org::apache::http::entity::StringEntity,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::StringEntity,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::StringEntity,2,"isRepeatable","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::StringEntity,3,"getContentLength","()J")
J2CPP_DEFINE_METHOD(org::apache::http::entity::StringEntity,4,"getContent","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(org::apache::http::entity::StringEntity,5,"writeTo","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::StringEntity,6,"isStreaming","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::StringEntity,7,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(org::apache::http::entity::StringEntity,0,"content","[B")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_STRINGENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
