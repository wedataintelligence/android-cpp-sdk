/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.reflect.Array
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_ARRAY_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_ARRAY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class Array;
	class Array
		: public object<Array>
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

		explicit Array(jobject jobj)
		: object<Array>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::lang::Object > get(local_ref< java::lang::Object >  const&, jint);
		static jboolean getBoolean(local_ref< java::lang::Object >  const&, jint);
		static jbyte getByte(local_ref< java::lang::Object >  const&, jint);
		static jchar getChar(local_ref< java::lang::Object >  const&, jint);
		static jdouble getDouble(local_ref< java::lang::Object >  const&, jint);
		static jfloat getFloat(local_ref< java::lang::Object >  const&, jint);
		static jint getInt(local_ref< java::lang::Object >  const&, jint);
		static jint getLength(local_ref< java::lang::Object >  const&);
		static jlong getLong(local_ref< java::lang::Object >  const&, jint);
		static jshort getShort(local_ref< java::lang::Object >  const&, jint);
		static local_ref< java::lang::Object > newInstance(local_ref< java::lang::Class >  const&, local_ref< array<jint,1> >  const&);
		static local_ref< java::lang::Object > newInstance(local_ref< java::lang::Class >  const&, jint);
		static void set(local_ref< java::lang::Object >  const&, jint, local_ref< java::lang::Object >  const&);
		static void setBoolean(local_ref< java::lang::Object >  const&, jint, jboolean);
		static void setByte(local_ref< java::lang::Object >  const&, jint, jbyte);
		static void setChar(local_ref< java::lang::Object >  const&, jint, jchar);
		static void setDouble(local_ref< java::lang::Object >  const&, jint, jdouble);
		static void setFloat(local_ref< java::lang::Object >  const&, jint, jfloat);
		static void setInt(local_ref< java::lang::Object >  const&, jint, jint);
		static void setLong(local_ref< java::lang::Object >  const&, jint, jlong);
		static void setShort(local_ref< java::lang::Object >  const&, jint, jshort);
	}; //class Array

} //namespace reflect
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_ARRAY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_ARRAY_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_ARRAY_HPP_IMPL

namespace j2cpp {



java::lang::reflect::Array::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::Object > java::lang::reflect::Array::get(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(1),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(a0, a1);
}

jboolean java::lang::reflect::Array::getBoolean(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(2),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(a0, a1);
}

jbyte java::lang::reflect::Array::getByte(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(3),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(3), 
		jbyte >
	(a0, a1);
}

jchar java::lang::reflect::Array::getChar(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(4),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(4), 
		jchar >
	(a0, a1);
}

jdouble java::lang::reflect::Array::getDouble(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(5),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(5), 
		jdouble >
	(a0, a1);
}

jfloat java::lang::reflect::Array::getFloat(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(6),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(6), 
		jfloat >
	(a0, a1);
}

jint java::lang::reflect::Array::getInt(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(7),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(a0, a1);
}

jint java::lang::reflect::Array::getLength(local_ref< java::lang::Object > const &a0)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(8),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(a0);
}

jlong java::lang::reflect::Array::getLong(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(9),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(9), 
		jlong >
	(a0, a1);
}

jshort java::lang::reflect::Array::getShort(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(10),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(10), 
		jshort >
	(a0, a1);
}

local_ref< java::lang::Object > java::lang::reflect::Array::newInstance(local_ref< java::lang::Class > const &a0, local_ref< array<jint,1> > const &a1)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(11),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object > >
	(a0, a1);
}

local_ref< java::lang::Object > java::lang::reflect::Array::newInstance(local_ref< java::lang::Class > const &a0, jint a1)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(12),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::Object > >
	(a0, a1);
}

void java::lang::reflect::Array::set(local_ref< java::lang::Object > const &a0, jint a1, local_ref< java::lang::Object > const &a2)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(13),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(a0, a1, a2);
}

void java::lang::reflect::Array::setBoolean(local_ref< java::lang::Object > const &a0, jint a1, jboolean a2)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(14),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(a0, a1, a2);
}

void java::lang::reflect::Array::setByte(local_ref< java::lang::Object > const &a0, jint a1, jbyte a2)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(15),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(a0, a1, a2);
}

void java::lang::reflect::Array::setChar(local_ref< java::lang::Object > const &a0, jint a1, jchar a2)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(16),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(a0, a1, a2);
}

void java::lang::reflect::Array::setDouble(local_ref< java::lang::Object > const &a0, jint a1, jdouble a2)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(17),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(a0, a1, a2);
}

void java::lang::reflect::Array::setFloat(local_ref< java::lang::Object > const &a0, jint a1, jfloat a2)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(18),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(a0, a1, a2);
}

void java::lang::reflect::Array::setInt(local_ref< java::lang::Object > const &a0, jint a1, jint a2)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(19),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(a0, a1, a2);
}

void java::lang::reflect::Array::setLong(local_ref< java::lang::Object > const &a0, jint a1, jlong a2)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(20),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(a0, a1, a2);
}

void java::lang::reflect::Array::setShort(local_ref< java::lang::Object > const &a0, jint a1, jshort a2)
{
	return call_static_method<
		java::lang::reflect::Array::J2CPP_CLASS_NAME,
		java::lang::reflect::Array::J2CPP_METHOD_NAME(21),
		java::lang::reflect::Array::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::lang::reflect::Array,"java/lang/reflect/Array")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,1,"get","(Ljava/lang/Object;I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,2,"getBoolean","(Ljava/lang/Object;I)Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,3,"getByte","(Ljava/lang/Object;I)B")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,4,"getChar","(Ljava/lang/Object;I)C")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,5,"getDouble","(Ljava/lang/Object;I)D")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,6,"getFloat","(Ljava/lang/Object;I)F")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,7,"getInt","(Ljava/lang/Object;I)I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,8,"getLength","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,9,"getLong","(Ljava/lang/Object;I)J")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,10,"getShort","(Ljava/lang/Object;I)S")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,11,"newInstance","(Ljava/lang/Class;[I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,12,"newInstance","(Ljava/lang/Class;I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,13,"set","(Ljava/lang/Object;ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,14,"setBoolean","(Ljava/lang/Object;IZ)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,15,"setByte","(Ljava/lang/Object;IB)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,16,"setChar","(Ljava/lang/Object;IC)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,17,"setDouble","(Ljava/lang/Object;ID)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,18,"setFloat","(Ljava/lang/Object;IF)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,19,"setInt","(Ljava/lang/Object;II)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,20,"setLong","(Ljava/lang/Object;IJ)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Array,21,"setShort","(Ljava/lang/Object;IS)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_ARRAY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION