#include "pch-cpp.hpp"






struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
struct SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9E0579800D2261789D578B378D6BD8D6F31974;
IL2CPP_EXTERN_C String_t* _stringLiteral2BCC88E2273AB1B79FB74CB9D7E81971564B3F9C;
IL2CPP_EXTERN_C String_t* _stringLiteralDB9B1F9F824E5CA4FC034F155DAD22B0B357400B;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mDA8E52933A6A885D9FCF549C99489EF5E095BE1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var;
struct TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TextUtilities_t2A52211BCD70DAC88C65B8FA51B350BECB96FD30  : public RuntimeObject
{
};
struct UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E  : public RuntimeObject
{
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___m_UnicodeLineBreakingRules;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___m_LeadingCharacters;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___m_FollowingCharacters;
	bool ___m_UseModernHangulLineBreakingRules;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_LeadingCharactersLookup;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_FollowingCharactersLookup;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF 
{
	TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_pinvoke
{
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_com
{
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2;
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_StaticFields
{
	int32_t ___k_ColorId;
	int32_t ___k_MainTexId;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17  : public RuntimeArray
{
	ALIGN_FIELD (8) TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 m_Items[1];

	inline TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_gshared_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_gshared (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mDA8E52933A6A885D9FCF549C99489EF5E095BE1E_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TextUtilities_ToUpperFast_m7E98D5D17030A387012E262648346523DCC3AA0B (Il2CppChar ___0_c, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_gshared_inline)(__this, method);
}
inline uint32_t List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, int32_t, const RuntimeMethod*))List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeLineBreakingRules_LoadLineBreakingRules_m4686111E39B00E27AA6AD88762793EEFCCC14A75 (UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline void HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* UnicodeLineBreakingRules_GetCharacters_m93663235F54D32D801E67994714B79759D2F4137 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___0_file, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
inline bool HashSet_1_Add_mDA8E52933A6A885D9FCF549C99489EF5E095BE1E (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, uint32_t, const RuntimeMethod*))HashSet_1_Add_mDA8E52933A6A885D9FCF549C99489EF5E095BE1E_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TextUtilities_ToUpperFast_m7E98D5D17030A387012E262648346523DCC3AA0B (Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9E0579800D2261789D578B378D6BD8D6F31974);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	{
		Il2CppChar L_0 = ___0_c;
		NullCheck(_stringLiteral0C9E0579800D2261789D578B378D6BD8D6F31974);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral0C9E0579800D2261789D578B378D6BD8D6F31974, NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar L_3 = ___0_c;
		V_1 = L_3;
		goto IL_0026;
	}

IL_0018:
	{
		Il2CppChar L_4 = ___0_c;
		NullCheck(_stringLiteral0C9E0579800D2261789D578B378D6BD8D6F31974);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral0C9E0579800D2261789D578B378D6BD8D6F31974, L_4, NULL);
		V_1 = L_5;
		goto IL_0026;
	}

IL_0026:
	{
		Il2CppChar L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextUtilities_GetHashCodeCaseInSensitive_m3241BDD3A6F82A061C21BF5D347B690D732F5B59 (String_t* ___0_s, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		String_t* L_2 = ___0_s;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		Il2CppChar L_5;
		L_5 = TextUtilities_ToUpperFast_m7E98D5D17030A387012E262648346523DCC3AA0B(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_0<<5)), L_1))^(int32_t)L_5));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		int32_t L_7 = V_1;
		String_t* L_8 = ___0_s;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_11 = V_0;
		V_3 = L_11;
		goto IL_002f;
	}

IL_002f:
	{
		int32_t L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextUtilities_UintToString_m7C0ECB6D2370EC4275FE0E70FB979CADA55A6216 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___0_unicodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_0 = ___0_unicodes;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline(L_0, List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_0;
		int32_t L_4 = V_1;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_5 = ___0_unicodes;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7;
		L_7 = List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324(L_5, L_6, List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Il2CppChar)((int32_t)(uint16_t)L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0022:
	{
		int32_t L_9 = V_1;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_10 = ___0_unicodes;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline(L_10, List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_0011;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = V_0;
		String_t* L_14;
		L_14 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_13, NULL);
		V_3 = L_14;
		goto IL_0038;
	}

IL_0038:
	{
		String_t* L_15 = V_3;
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* UnicodeLineBreakingRules_get_leadingCharactersLookup_m1DAC015D7E37112EAE0437E6472AEA0719DFF3DC (UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_1 = NULL;
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_0 = __this->___m_LeadingCharactersLookup;
		V_0 = (bool)((((RuntimeObject*)(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnicodeLineBreakingRules_LoadLineBreakingRules_m4686111E39B00E27AA6AD88762793EEFCCC14A75(__this, NULL);
	}

IL_0015:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_2 = __this->___m_LeadingCharactersLookup;
		V_1 = L_2;
		goto IL_001e;
	}

IL_001e:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* UnicodeLineBreakingRules_get_followingCharactersLookup_m5510A21873DC5DA66F4A2DFA4C26A5EFAD494D8B (UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_1 = NULL;
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_0 = __this->___m_LeadingCharactersLookup;
		V_0 = (bool)((((RuntimeObject*)(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnicodeLineBreakingRules_LoadLineBreakingRules_m4686111E39B00E27AA6AD88762793EEFCCC14A75(__this, NULL);
	}

IL_0015:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_2 = __this->___m_FollowingCharactersLookup;
		V_1 = L_2;
		goto IL_001e;
	}

IL_001e:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeLineBreakingRules_get_useModernHangulLineBreakingRules_mD86D283CE7BA23A0174B9227A7BD915D3D9FD464 (UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_UseModernHangulLineBreakingRules;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeLineBreakingRules_LoadLineBreakingRules_m4686111E39B00E27AA6AD88762793EEFCCC14A75 (UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BCC88E2273AB1B79FB74CB9D7E81971564B3F9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB9B1F9F824E5CA4FC034F155DAD22B0B357400B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* G_B5_0 = NULL;
	UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* G_B4_0 = NULL;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* G_B6_0 = NULL;
	UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* G_B6_1 = NULL;
	UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* G_B10_0 = NULL;
	UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* G_B9_0 = NULL;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* G_B11_0 = NULL;
	UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* G_B11_1 = NULL;
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_0 = __this->___m_LeadingCharactersLookup;
		V_0 = (bool)((((RuntimeObject*)(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_009f;
		}
	}
	{
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_2 = __this->___m_LeadingCharacters;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_5;
		L_5 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteralDB9B1F9F824E5CA4FC034F155DAD22B0B357400B, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		__this->___m_LeadingCharacters = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LeadingCharacters), (void*)L_5);
	}

IL_0032:
	{
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_6 = __this->___m_LeadingCharacters;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_7)
		{
			G_B5_0 = __this;
			goto IL_0048;
		}
		G_B4_0 = __this;
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_8 = (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)il2cpp_codegen_object_new(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A(L_8, HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A_RuntimeMethod_var);
		G_B6_0 = L_8;
		G_B6_1 = G_B4_0;
		goto IL_0053;
	}

IL_0048:
	{
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_9 = __this->___m_LeadingCharacters;
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_10;
		L_10 = UnicodeLineBreakingRules_GetCharacters_m93663235F54D32D801E67994714B79759D2F4137(L_9, NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_0;
	}

IL_0053:
	{
		NullCheck(G_B6_1);
		G_B6_1->___m_LeadingCharactersLookup = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___m_LeadingCharactersLookup), (void*)G_B6_0);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_11 = __this->___m_FollowingCharacters;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_12;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_14;
		L_14 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral2BCC88E2273AB1B79FB74CB9D7E81971564B3F9C, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		__this->___m_FollowingCharacters = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FollowingCharacters), (void*)L_14);
	}

IL_0078:
	{
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_15 = __this->___m_FollowingCharacters;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_008e;
		}
		G_B9_0 = __this;
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_17 = (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)il2cpp_codegen_object_new(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A(L_17, HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A_RuntimeMethod_var);
		G_B11_0 = L_17;
		G_B11_1 = G_B9_0;
		goto IL_0099;
	}

IL_008e:
	{
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_18 = __this->___m_FollowingCharacters;
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_19;
		L_19 = UnicodeLineBreakingRules_GetCharacters_m93663235F54D32D801E67994714B79759D2F4137(L_18, NULL);
		G_B11_0 = L_19;
		G_B11_1 = G_B10_0;
	}

IL_0099:
	{
		NullCheck(G_B11_1);
		G_B11_1->___m_FollowingCharactersLookup = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->___m_FollowingCharactersLookup), (void*)G_B11_0);
	}

IL_009f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* UnicodeLineBreakingRules_GetCharacters_m93663235F54D32D801E67994714B79759D2F4137 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___0_file, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mDA8E52933A6A885D9FCF549C99489EF5E095BE1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_4 = NULL;
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_0 = (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)il2cpp_codegen_object_new(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A(L_0, HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A_RuntimeMethod_var);
		V_0 = L_0;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_1 = ___0_file;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_1, NULL);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0024;
	}

IL_0012:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_3 = V_0;
		String_t* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		NullCheck(L_3);
		bool L_7;
		L_7 = HashSet_1_Add_mDA8E52933A6A885D9FCF549C99489EF5E095BE1E(L_3, L_6, HashSet_1_Add_mDA8E52933A6A885D9FCF549C99489EF5E095BE1E_RuntimeMethod_var);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0024:
	{
		int32_t L_9 = V_2;
		String_t* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0012;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_13 = V_0;
		V_4 = L_13;
		goto IL_0036;
	}

IL_0036:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_14 = V_4;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeLineBreakingRules__ctor_mD94779B4996B56EA84C847EC4DD287AB1A8ADE85 (UnicodeLineBreakingRules_t80BE36F5E16AE48FE7B6DE1C91D36B1142B4EC0E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshal_pinvoke(const MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF& unmarshaled, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___materialException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'MeshInfoBindings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___materialException, NULL);
}
IL2CPP_EXTERN_C void MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshal_pinvoke_back(const MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_pinvoke& marshaled, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF& unmarshaled)
{
	Exception_t* ___materialException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'MeshInfoBindings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___materialException, NULL);
}
IL2CPP_EXTERN_C void MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshal_pinvoke_cleanup(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshal_com(const MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF& unmarshaled, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_com& marshaled)
{
	Exception_t* ___materialException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'MeshInfoBindings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___materialException, NULL);
}
IL2CPP_EXTERN_C void MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshal_com_back(const MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_com& marshaled, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF& unmarshaled)
{
	Exception_t* ___materialException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'MeshInfoBindings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___materialException, NULL);
}
IL2CPP_EXTERN_C void MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshal_com_cleanup(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_gshared_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
