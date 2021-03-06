/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.json.JSONObject
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_JSON_JSONOBJECT_HPP_DECL
#define J2CPP_ORG_JSON_JSONOBJECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Number; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace org { namespace json { class JSONArray; } } }
namespace j2cpp { namespace org { namespace json { class JSONTokener; } } }


#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map.hpp>
#include <org/json/JSONArray.hpp>
#include <org/json/JSONTokener.hpp>


namespace j2cpp {

namespace org { namespace json {

	class JSONObject;
	class JSONObject
		: public object<JSONObject>
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
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_FIELD(0)

		explicit JSONObject(jobject jobj)
		: object<JSONObject>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		JSONObject();
		JSONObject(local_ref< java::util::Map > const&);
		JSONObject(local_ref< org::json::JSONTokener > const&);
		JSONObject(local_ref< java::lang::String > const&);
		JSONObject(local_ref< org::json::JSONObject > const&, local_ref< array< local_ref< java::lang::String >, 1> > const&);
		jint length();
		local_ref< org::json::JSONObject > put(local_ref< java::lang::String >  const&, jboolean);
		local_ref< org::json::JSONObject > put(local_ref< java::lang::String >  const&, jdouble);
		local_ref< org::json::JSONObject > put(local_ref< java::lang::String >  const&, jint);
		local_ref< org::json::JSONObject > put(local_ref< java::lang::String >  const&, jlong);
		local_ref< org::json::JSONObject > put(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		local_ref< org::json::JSONObject > putOpt(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		local_ref< org::json::JSONObject > accumulate(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::String >  const&);
		jboolean isNull(local_ref< java::lang::String >  const&);
		jboolean has(local_ref< java::lang::String >  const&);
		local_ref< java::lang::Object > get(local_ref< java::lang::String >  const&);
		local_ref< java::lang::Object > opt(local_ref< java::lang::String >  const&);
		jboolean getBoolean(local_ref< java::lang::String >  const&);
		jboolean optBoolean(local_ref< java::lang::String >  const&);
		jboolean optBoolean(local_ref< java::lang::String >  const&, jboolean);
		jdouble getDouble(local_ref< java::lang::String >  const&);
		jdouble optDouble(local_ref< java::lang::String >  const&);
		jdouble optDouble(local_ref< java::lang::String >  const&, jdouble);
		jint getInt(local_ref< java::lang::String >  const&);
		jint optInt(local_ref< java::lang::String >  const&);
		jint optInt(local_ref< java::lang::String >  const&, jint);
		jlong getLong(local_ref< java::lang::String >  const&);
		jlong optLong(local_ref< java::lang::String >  const&);
		jlong optLong(local_ref< java::lang::String >  const&, jlong);
		local_ref< java::lang::String > getString(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > optString(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > optString(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::json::JSONArray > getJSONArray(local_ref< java::lang::String >  const&);
		local_ref< org::json::JSONArray > optJSONArray(local_ref< java::lang::String >  const&);
		local_ref< org::json::JSONObject > getJSONObject(local_ref< java::lang::String >  const&);
		local_ref< org::json::JSONObject > optJSONObject(local_ref< java::lang::String >  const&);
		local_ref< org::json::JSONArray > toJSONArray(local_ref< org::json::JSONArray >  const&);
		local_ref< java::util::Iterator > keys();
		local_ref< org::json::JSONArray > names();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::String > toString(jint);
		static local_ref< java::lang::String > numberToString(local_ref< java::lang::Number >  const&);
		static local_ref< java::lang::String > quote(local_ref< java::lang::String >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::Object > > NULL;
	}; //class JSONObject

} //namespace json
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_JSON_JSONOBJECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_JSON_JSONOBJECT_HPP_IMPL
#define J2CPP_ORG_JSON_JSONOBJECT_HPP_IMPL

namespace j2cpp {



org::json::JSONObject::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::json::JSONObject::JSONObject()
: object<org::json::JSONObject>(
	call_new_object<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(0),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



org::json::JSONObject::JSONObject(local_ref< java::util::Map > const &a0)
: object<org::json::JSONObject>(
	call_new_object<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(1),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



org::json::JSONObject::JSONObject(local_ref< org::json::JSONTokener > const &a0)
: object<org::json::JSONObject>(
	call_new_object<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(2),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



org::json::JSONObject::JSONObject(local_ref< java::lang::String > const &a0)
: object<org::json::JSONObject>(
	call_new_object<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(3),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}



org::json::JSONObject::JSONObject(local_ref< org::json::JSONObject > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
: object<org::json::JSONObject>(
	call_new_object<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(4),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(4)
	>(a0, a1)
)
{
}


jint org::json::JSONObject::length()
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(5),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

local_ref< org::json::JSONObject > org::json::JSONObject::put(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(6),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::json::JSONObject >
	>(get_jobject(), a0, a1);
}

local_ref< org::json::JSONObject > org::json::JSONObject::put(local_ref< java::lang::String > const &a0, jdouble a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(7),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::json::JSONObject >
	>(get_jobject(), a0, a1);
}

local_ref< org::json::JSONObject > org::json::JSONObject::put(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(8),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::json::JSONObject >
	>(get_jobject(), a0, a1);
}

local_ref< org::json::JSONObject > org::json::JSONObject::put(local_ref< java::lang::String > const &a0, jlong a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(9),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::json::JSONObject >
	>(get_jobject(), a0, a1);
}

local_ref< org::json::JSONObject > org::json::JSONObject::put(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(10),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< org::json::JSONObject >
	>(get_jobject(), a0, a1);
}

local_ref< org::json::JSONObject > org::json::JSONObject::putOpt(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(11),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< org::json::JSONObject >
	>(get_jobject(), a0, a1);
}

local_ref< org::json::JSONObject > org::json::JSONObject::accumulate(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(12),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< org::json::JSONObject >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > org::json::JSONObject::remove(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(13),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jboolean org::json::JSONObject::isNull(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(14),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject(), a0);
}

jboolean org::json::JSONObject::has(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(15),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > org::json::JSONObject::get(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(16),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > org::json::JSONObject::opt(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(17),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jboolean org::json::JSONObject::getBoolean(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(18),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(18), 
		jboolean
	>(get_jobject(), a0);
}

jboolean org::json::JSONObject::optBoolean(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(19),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(19), 
		jboolean
	>(get_jobject(), a0);
}

jboolean org::json::JSONObject::optBoolean(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(20),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(get_jobject(), a0, a1);
}

jdouble org::json::JSONObject::getDouble(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(21),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(21), 
		jdouble
	>(get_jobject(), a0);
}

jdouble org::json::JSONObject::optDouble(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(22),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(22), 
		jdouble
	>(get_jobject(), a0);
}

jdouble org::json::JSONObject::optDouble(local_ref< java::lang::String > const &a0, jdouble a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(23),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(23), 
		jdouble
	>(get_jobject(), a0, a1);
}

jint org::json::JSONObject::getInt(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(24),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(24), 
		jint
	>(get_jobject(), a0);
}

jint org::json::JSONObject::optInt(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(25),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(get_jobject(), a0);
}

jint org::json::JSONObject::optInt(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(26),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(26), 
		jint
	>(get_jobject(), a0, a1);
}

jlong org::json::JSONObject::getLong(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(27),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(27), 
		jlong
	>(get_jobject(), a0);
}

jlong org::json::JSONObject::optLong(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(28),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(28), 
		jlong
	>(get_jobject(), a0);
}

jlong org::json::JSONObject::optLong(local_ref< java::lang::String > const &a0, jlong a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(29),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(29), 
		jlong
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > org::json::JSONObject::getString(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(30),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::json::JSONObject::optString(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(31),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::json::JSONObject::optString(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(32),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

local_ref< org::json::JSONArray > org::json::JSONObject::getJSONArray(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(33),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< org::json::JSONArray >
	>(get_jobject(), a0);
}

local_ref< org::json::JSONArray > org::json::JSONObject::optJSONArray(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(34),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(34), 
		local_ref< org::json::JSONArray >
	>(get_jobject(), a0);
}

local_ref< org::json::JSONObject > org::json::JSONObject::getJSONObject(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(35),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(35), 
		local_ref< org::json::JSONObject >
	>(get_jobject(), a0);
}

local_ref< org::json::JSONObject > org::json::JSONObject::optJSONObject(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(36),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< org::json::JSONObject >
	>(get_jobject(), a0);
}

local_ref< org::json::JSONArray > org::json::JSONObject::toJSONArray(local_ref< org::json::JSONArray > const &a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(37),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< org::json::JSONArray >
	>(get_jobject(), a0);
}

local_ref< java::util::Iterator > org::json::JSONObject::keys()
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(38),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(38), 
		local_ref< java::util::Iterator >
	>(get_jobject());
}

local_ref< org::json::JSONArray > org::json::JSONObject::names()
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(39),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(39), 
		local_ref< org::json::JSONArray >
	>(get_jobject());
}

local_ref< java::lang::String > org::json::JSONObject::toString()
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(40),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(40), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::json::JSONObject::toString(jint a0)
{
	return call_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(41),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::json::JSONObject::numberToString(local_ref< java::lang::Number > const &a0)
{
	return call_static_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(42),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(42), 
		local_ref< java::lang::String >
	>(a0);
}

local_ref< java::lang::String > org::json::JSONObject::quote(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		org::json::JSONObject::J2CPP_CLASS_NAME,
		org::json::JSONObject::J2CPP_METHOD_NAME(43),
		org::json::JSONObject::J2CPP_METHOD_SIGNATURE(43), 
		local_ref< java::lang::String >
	>(a0);
}



static_field<
	org::json::JSONObject::J2CPP_CLASS_NAME,
	org::json::JSONObject::J2CPP_FIELD_NAME(0),
	org::json::JSONObject::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::Object >
> org::json::JSONObject::NULL;


J2CPP_DEFINE_CLASS(org::json::JSONObject,"org/json/JSONObject")
J2CPP_DEFINE_METHOD(org::json::JSONObject,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::json::JSONObject,1,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(org::json::JSONObject,2,"<init>","(Lorg/json/JSONTokener;)V")
J2CPP_DEFINE_METHOD(org::json::JSONObject,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::json::JSONObject,4,"<init>","(Lorg/json/JSONObject;[java.lang.String)V")
J2CPP_DEFINE_METHOD(org::json::JSONObject,5,"length","()I")
J2CPP_DEFINE_METHOD(org::json::JSONObject,6,"put","(Ljava/lang/String;Z)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,7,"put","(Ljava/lang/String;D)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,8,"put","(Ljava/lang/String;I)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,9,"put","(Ljava/lang/String;J)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,10,"put","(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,11,"putOpt","(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,12,"accumulate","(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,13,"remove","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,14,"isNull","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::json::JSONObject,15,"has","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::json::JSONObject,16,"get","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,17,"opt","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,18,"getBoolean","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::json::JSONObject,19,"optBoolean","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::json::JSONObject,20,"optBoolean","(Ljava/lang/String;Z)Z")
J2CPP_DEFINE_METHOD(org::json::JSONObject,21,"getDouble","(Ljava/lang/String;)D")
J2CPP_DEFINE_METHOD(org::json::JSONObject,22,"optDouble","(Ljava/lang/String;)D")
J2CPP_DEFINE_METHOD(org::json::JSONObject,23,"optDouble","(Ljava/lang/String;D)D")
J2CPP_DEFINE_METHOD(org::json::JSONObject,24,"getInt","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(org::json::JSONObject,25,"optInt","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(org::json::JSONObject,26,"optInt","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(org::json::JSONObject,27,"getLong","(Ljava/lang/String;)J")
J2CPP_DEFINE_METHOD(org::json::JSONObject,28,"optLong","(Ljava/lang/String;)J")
J2CPP_DEFINE_METHOD(org::json::JSONObject,29,"optLong","(Ljava/lang/String;J)J")
J2CPP_DEFINE_METHOD(org::json::JSONObject,30,"getString","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,31,"optString","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,32,"optString","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,33,"getJSONArray","(Ljava/lang/String;)Lorg/json/JSONArray;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,34,"optJSONArray","(Ljava/lang/String;)Lorg/json/JSONArray;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,35,"getJSONObject","(Ljava/lang/String;)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,36,"optJSONObject","(Ljava/lang/String;)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,37,"toJSONArray","(Lorg/json/JSONArray;)Lorg/json/JSONArray;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,38,"keys","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,39,"names","()Lorg/json/JSONArray;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,40,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,41,"toString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,42,"numberToString","(Ljava/lang/Number;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,43,"quote","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,44,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::json::JSONObject,0,"NULL","Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_JSON_JSONOBJECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
