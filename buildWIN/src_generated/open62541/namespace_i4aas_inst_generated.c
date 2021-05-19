/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace_i4aas_inst_generated.h"


/* Dictionaries - ns=2;i=96 */

static UA_StatusCode function_namespace_i4aas_inst_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Dictionaries");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Dictionaries");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 96LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Dictionaries"),
UA_NODEID_NUMERIC(ns[0], 17591LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 96LU)
);
}

/* ConceptDescriptions - ns=2;i=97 */

static UA_StatusCode function_namespace_i4aas_inst_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ConceptDescriptions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ConceptDescriptions");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 97LU),
UA_NODEID_NUMERIC(ns[2], 96LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ConceptDescriptions"),
UA_NODEID_NUMERIC(ns[0], 17591LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 97LU)
);
}

/* www.phi-ware.com/ids/cd/1151_2111_5012_6973 - ns=2;i=145 */

static UA_StatusCode function_namespace_i4aas_inst_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "www.phi-ware.com/ids/cd/1151_2111_5012_6973");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 145LU),
UA_NODEID_NUMERIC(ns[2], 97LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "www.phi-ware.com/ids/cd/1151_2111_5012_6973"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 145LU)
);
}

/* DataSpecification - ns=2;i=155 */

static UA_StatusCode function_namespace_i4aas_inst_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 155LU),
UA_NODEID_NUMERIC(ns[2], 145LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DataSpecification"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 155LU)
);
}

/* Keys - ns=2;i=156 */

static UA_StatusCode function_namespace_i4aas_inst_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 156LU),
UA_NODEID_NUMERIC(ns[2], 155LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 156LU)
);
}

/* Category - ns=2;i=146 */

static UA_StatusCode function_namespace_i4aas_inst_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_146_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_146_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_146_variant_DataContents);
*variablenode_ns_2_i_146_variant_DataContents = UA_STRING_ALLOC("VARIABLE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_146_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 146LU),
UA_NODEID_NUMERIC(ns[2], 145LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_146_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 146LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 146LU)
);
}

/* IsCaseOf - ns=2;i=153 */

static UA_StatusCode function_namespace_i4aas_inst_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IsCaseOf");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IsCaseOf");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 153LU),
UA_NODEID_NUMERIC(ns[2], 145LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "IsCaseOf"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 153LU)
);
}

/* Keys - ns=2;i=154 */

static UA_StatusCode function_namespace_i4aas_inst_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_154_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_154_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_154_variant_DataContents);
*variablenode_ns_2_i_154_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]www.phi-ware.com/ids/cd/1151_2111_5012_6973");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_154_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 154LU),
UA_NODEID_NUMERIC(ns[2], 153LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_154_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 154LU)
);
}

/* Administration - ns=2;i=150 */

static UA_StatusCode function_namespace_i4aas_inst_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 150LU),
UA_NODEID_NUMERIC(ns[2], 145LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 150LU)
);
}

/* Version - ns=2;i=151 */

static UA_StatusCode function_namespace_i4aas_inst_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_151_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_151_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_151_variant_DataContents);
*variablenode_ns_2_i_151_variant_DataContents = UA_STRING_ALLOC("1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_151_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 151LU),
UA_NODEID_NUMERIC(ns[2], 150LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_151_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 151LU)
);
}

/* Revision - ns=2;i=152 */

static UA_StatusCode function_namespace_i4aas_inst_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_152_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_152_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_152_variant_DataContents);
*variablenode_ns_2_i_152_variant_DataContents = UA_STRING_ALLOC("0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_152_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 152LU),
UA_NODEID_NUMERIC(ns[2], 150LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_152_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 152LU)
);
}

/* Identification - ns=2;i=147 */

static UA_StatusCode function_namespace_i4aas_inst_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 147LU),
UA_NODEID_NUMERIC(ns[2], 145LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 147LU)
);
}

/* Id - ns=2;i=149 */

static UA_StatusCode function_namespace_i4aas_inst_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_149_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_149_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_149_variant_DataContents);
*variablenode_ns_2_i_149_variant_DataContents = UA_STRING_ALLOC("www.phi-ware.com/ids/cd/1151_2111_5012_6973");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_149_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 149LU),
UA_NODEID_NUMERIC(ns[2], 147LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_149_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 149LU)
);
}

/* IdType - ns=2;i=148 */

static UA_StatusCode function_namespace_i4aas_inst_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_148_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_148_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_148_variant_DataContents);
*variablenode_ns_2_i_148_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_148_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 148LU),
UA_NODEID_NUMERIC(ns[2], 147LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_148_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 148LU)
);
}

/* DataSpecificationIEC61360 - ns=2;i=157 */

static UA_StatusCode function_namespace_i4aas_inst_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 157LU),
UA_NODEID_NUMERIC(ns[2], 145LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DataSpecificationIEC61360"),
UA_NODEID_NUMERIC(ns[1], 3001LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 157LU)
);
}

/* Unit - ns=2;i=159 */

static UA_StatusCode function_namespace_i4aas_inst_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_159_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_159_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_159_variant_DataContents);
*variablenode_ns_2_i_159_variant_DataContents = UA_STRING_ALLOC("%");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_159_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Unit");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 159LU),
UA_NODEID_NUMERIC(ns[2], 157LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_159_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 159LU)
);
}

/* ShortName - ns=2;i=158 */

static UA_StatusCode function_namespace_i4aas_inst_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_2_i_158_variant_DataContents[1];
variablenode_ns_2_i_158_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "Relative Humidity");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_158_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ShortName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ShortName");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 158LU),
UA_NODEID_NUMERIC(ns[2], 157LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ShortName"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 158LU)
);
}

/* Symbol - ns=2;i=160 */

static UA_StatusCode function_namespace_i4aas_inst_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_160_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_160_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_160_variant_DataContents);
*variablenode_ns_2_i_160_variant_DataContents = UA_STRING_ALLOC("H");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_160_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Symbol");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Symbol");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 160LU),
UA_NODEID_NUMERIC(ns[2], 157LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Symbol"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_160_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 160LU)
);
}

/* DataType - ns=2;i=161 */

static UA_StatusCode function_namespace_i4aas_inst_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_161_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_161_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_161_variant_DataContents);
*variablenode_ns_2_i_161_variant_DataContents = UA_STRING_ALLOC("REAL_MEASURE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_161_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 161LU),
UA_NODEID_NUMERIC(ns[2], 157LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DataType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_161_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 161LU)
);
}

/* http://phi-ware.com/ids/cd/OperationalData/Submodel/1/0 - ns=2;i=106 */

static UA_StatusCode function_namespace_i4aas_inst_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://phi-ware.com/ids/cd/OperationalData/Submodel/1/0");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Operational Data");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 106LU),
UA_NODEID_NUMERIC(ns[2], 97LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "http://phi-ware.com/ids/cd/OperationalData/Submodel/1/0"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 106LU)
);
}

/* Identification - ns=2;i=108 */

static UA_StatusCode function_namespace_i4aas_inst_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 108LU),
UA_NODEID_NUMERIC(ns[2], 106LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 108LU)
);
}

/* Id - ns=2;i=110 */

static UA_StatusCode function_namespace_i4aas_inst_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_110_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_110_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_110_variant_DataContents);
*variablenode_ns_2_i_110_variant_DataContents = UA_STRING_ALLOC("http://phi-ware.com/ids/cd/OperationalData/Submodel/1/0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_110_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 110LU),
UA_NODEID_NUMERIC(ns[2], 108LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_110_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 110LU)
);
}

/* Category - ns=2;i=107 */

static UA_StatusCode function_namespace_i4aas_inst_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_107_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_107_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_107_variant_DataContents);
*variablenode_ns_2_i_107_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_107_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 107LU),
UA_NODEID_NUMERIC(ns[2], 106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_107_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 107LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 107LU)
);
}

/* www.phi-ware.com/ids/cd/3195_1111_5012_8206 - ns=2;i=111 */

static UA_StatusCode function_namespace_i4aas_inst_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "www.phi-ware.com/ids/cd/3195_1111_5012_8206");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 111LU),
UA_NODEID_NUMERIC(ns[2], 97LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "www.phi-ware.com/ids/cd/3195_1111_5012_8206"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 111LU)
);
}

/* Administration - ns=2;i=116 */

static UA_StatusCode function_namespace_i4aas_inst_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 116LU),
UA_NODEID_NUMERIC(ns[2], 111LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 116LU)
);
}

/* Revision - ns=2;i=118 */

static UA_StatusCode function_namespace_i4aas_inst_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_118_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_118_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_118_variant_DataContents);
*variablenode_ns_2_i_118_variant_DataContents = UA_STRING_ALLOC("0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_118_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 118LU),
UA_NODEID_NUMERIC(ns[2], 116LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_118_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 118LU)
);
}

/* Version - ns=2;i=117 */

static UA_StatusCode function_namespace_i4aas_inst_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_117_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_117_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_117_variant_DataContents);
*variablenode_ns_2_i_117_variant_DataContents = UA_STRING_ALLOC("1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_117_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 117LU),
UA_NODEID_NUMERIC(ns[2], 116LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_117_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 117LU)
);
}

/* Identification - ns=2;i=113 */

static UA_StatusCode function_namespace_i4aas_inst_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 113LU),
UA_NODEID_NUMERIC(ns[2], 111LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 113LU)
);
}

/* Id - ns=2;i=115 */

static UA_StatusCode function_namespace_i4aas_inst_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_115_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_115_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_115_variant_DataContents);
*variablenode_ns_2_i_115_variant_DataContents = UA_STRING_ALLOC("www.phi-ware.com/ids/cd/3195_1111_5012_8206");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_115_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 115LU),
UA_NODEID_NUMERIC(ns[2], 113LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_115_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 115LU)
);
}

/* IdType - ns=2;i=114 */

static UA_StatusCode function_namespace_i4aas_inst_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_114_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_114_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_114_variant_DataContents);
*variablenode_ns_2_i_114_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_114_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 114LU),
UA_NODEID_NUMERIC(ns[2], 113LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_114_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 114LU)
);
}

/* IsCaseOf - ns=2;i=119 */

static UA_StatusCode function_namespace_i4aas_inst_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IsCaseOf");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IsCaseOf");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 119LU),
UA_NODEID_NUMERIC(ns[2], 111LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "IsCaseOf"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 119LU)
);
}

/* Keys - ns=2;i=120 */

static UA_StatusCode function_namespace_i4aas_inst_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_120_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_120_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_120_variant_DataContents);
*variablenode_ns_2_i_120_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]www.phi-ware.com/ids/cd/3195_1111_5012_8206");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_120_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 120LU),
UA_NODEID_NUMERIC(ns[2], 119LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_120_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 120LU)
);
}

/* DataSpecificationIEC61360 - ns=2;i=123 */

static UA_StatusCode function_namespace_i4aas_inst_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 123LU),
UA_NODEID_NUMERIC(ns[2], 111LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DataSpecificationIEC61360"),
UA_NODEID_NUMERIC(ns[1], 3001LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 123LU)
);
}

/* Symbol - ns=2;i=126 */

static UA_StatusCode function_namespace_i4aas_inst_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_126_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_126_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_126_variant_DataContents);
*variablenode_ns_2_i_126_variant_DataContents = UA_STRING_ALLOC("T");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_126_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Symbol");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Symbol");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 126LU),
UA_NODEID_NUMERIC(ns[2], 123LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Symbol"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_126_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 126LU)
);
}

/* DataType - ns=2;i=127 */

static UA_StatusCode function_namespace_i4aas_inst_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_127_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_127_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_127_variant_DataContents);
*variablenode_ns_2_i_127_variant_DataContents = UA_STRING_ALLOC("REAL_MEASURE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_127_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 127LU),
UA_NODEID_NUMERIC(ns[2], 123LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DataType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_127_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 127LU)
);
}

/* Unit - ns=2;i=125 */

static UA_StatusCode function_namespace_i4aas_inst_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_125_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_125_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_125_variant_DataContents);
*variablenode_ns_2_i_125_variant_DataContents = UA_STRING_ALLOC("degC");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_125_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Unit");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 125LU),
UA_NODEID_NUMERIC(ns[2], 123LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_125_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 125LU)
);
}

/* ShortName - ns=2;i=124 */

static UA_StatusCode function_namespace_i4aas_inst_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_2_i_124_variant_DataContents[1];
variablenode_ns_2_i_124_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "Relative Humidity");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_124_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ShortName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ShortName");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 124LU),
UA_NODEID_NUMERIC(ns[2], 123LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ShortName"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 124LU)
);
}

/* Category - ns=2;i=112 */

static UA_StatusCode function_namespace_i4aas_inst_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_112_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_112_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_112_variant_DataContents);
*variablenode_ns_2_i_112_variant_DataContents = UA_STRING_ALLOC("VARIABLE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_112_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 112LU),
UA_NODEID_NUMERIC(ns[2], 111LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_112_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 112LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 112LU)
);
}

/* www.phi-ware.com/ids/cd/1231_2111_5012_3596 - ns=2;i=128 */

static UA_StatusCode function_namespace_i4aas_inst_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "www.phi-ware.com/ids/cd/1231_2111_5012_3596");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 128LU),
UA_NODEID_NUMERIC(ns[2], 97LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "www.phi-ware.com/ids/cd/1231_2111_5012_3596"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 128LU)
);
}

/* DataSpecificationIEC61360 - ns=2;i=140 */

static UA_StatusCode function_namespace_i4aas_inst_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 140LU),
UA_NODEID_NUMERIC(ns[2], 128LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DataSpecificationIEC61360"),
UA_NODEID_NUMERIC(ns[1], 3001LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 140LU)
);
}

/* DataType - ns=2;i=144 */

static UA_StatusCode function_namespace_i4aas_inst_generated_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_144_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_144_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_144_variant_DataContents);
*variablenode_ns_2_i_144_variant_DataContents = UA_STRING_ALLOC("REAL_MEASURE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_144_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 144LU),
UA_NODEID_NUMERIC(ns[2], 140LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DataType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_144_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 144LU)
);
}

/* ShortName - ns=2;i=141 */

static UA_StatusCode function_namespace_i4aas_inst_generated_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_2_i_141_variant_DataContents[1];
variablenode_ns_2_i_141_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "Relative Humidity");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_141_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ShortName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ShortName");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 141LU),
UA_NODEID_NUMERIC(ns[2], 140LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ShortName"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 141LU)
);
}

/* Unit - ns=2;i=142 */

static UA_StatusCode function_namespace_i4aas_inst_generated_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_142_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_142_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_142_variant_DataContents);
*variablenode_ns_2_i_142_variant_DataContents = UA_STRING_ALLOC("hPa");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_142_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Unit");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 142LU),
UA_NODEID_NUMERIC(ns[2], 140LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_142_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 142LU)
);
}

/* Symbol - ns=2;i=143 */

static UA_StatusCode function_namespace_i4aas_inst_generated_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_143_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_143_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_143_variant_DataContents);
*variablenode_ns_2_i_143_variant_DataContents = UA_STRING_ALLOC("P");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_143_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Symbol");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Symbol");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 143LU),
UA_NODEID_NUMERIC(ns[2], 140LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Symbol"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_143_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 143LU)
);
}

/* IsCaseOf - ns=2;i=136 */

static UA_StatusCode function_namespace_i4aas_inst_generated_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IsCaseOf");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IsCaseOf");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 136LU),
UA_NODEID_NUMERIC(ns[2], 128LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "IsCaseOf"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 136LU)
);
}

/* Keys - ns=2;i=137 */

static UA_StatusCode function_namespace_i4aas_inst_generated_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_137_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_137_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_137_variant_DataContents);
*variablenode_ns_2_i_137_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]www.phi-ware.com/ids/cd/1231_2111_5012_3596");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_137_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 137LU),
UA_NODEID_NUMERIC(ns[2], 136LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_137_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 137LU)
);
}

/* DataSpecification - ns=2;i=138 */

static UA_StatusCode function_namespace_i4aas_inst_generated_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 138LU),
UA_NODEID_NUMERIC(ns[2], 128LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DataSpecification"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 138LU)
);
}

/* Keys - ns=2;i=139 */

static UA_StatusCode function_namespace_i4aas_inst_generated_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_139_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_139_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_139_variant_DataContents);
*variablenode_ns_2_i_139_variant_DataContents = UA_STRING_ALLOC("(Range)(local)[IdShort]press01.range");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_139_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 139LU),
UA_NODEID_NUMERIC(ns[2], 138LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_139_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 139LU)
);
}

/* Category - ns=2;i=129 */

static UA_StatusCode function_namespace_i4aas_inst_generated_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_129_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_129_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_129_variant_DataContents);
*variablenode_ns_2_i_129_variant_DataContents = UA_STRING_ALLOC("VARIABLE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_129_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 129LU),
UA_NODEID_NUMERIC(ns[2], 128LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_129_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 129LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 129LU)
);
}

/* Identification - ns=2;i=130 */

static UA_StatusCode function_namespace_i4aas_inst_generated_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 130LU),
UA_NODEID_NUMERIC(ns[2], 128LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 130LU)
);
}

/* IdType - ns=2;i=131 */

static UA_StatusCode function_namespace_i4aas_inst_generated_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_131_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_131_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_131_variant_DataContents);
*variablenode_ns_2_i_131_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_131_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 131LU),
UA_NODEID_NUMERIC(ns[2], 130LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_131_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 131LU)
);
}

/* Id - ns=2;i=132 */

static UA_StatusCode function_namespace_i4aas_inst_generated_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_132_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_132_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_132_variant_DataContents);
*variablenode_ns_2_i_132_variant_DataContents = UA_STRING_ALLOC("www.phi-ware.com/ids/cd/1231_2111_5012_3596");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_132_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 132LU),
UA_NODEID_NUMERIC(ns[2], 130LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_132_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 132LU)
);
}

/* http://phi-ware.com/ids/cd/1452_8172_4012_0957 - ns=2;i=99 */

static UA_StatusCode function_namespace_i4aas_inst_generated_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://phi-ware.com/ids/cd/1452_8172_4012_0957");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Bill Of Material");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 99LU),
UA_NODEID_NUMERIC(ns[2], 97LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "http://phi-ware.com/ids/cd/1452_8172_4012_0957"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 99LU)
);
}

/* Administration - ns=2;i=103 */

static UA_StatusCode function_namespace_i4aas_inst_generated_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 103LU),
UA_NODEID_NUMERIC(ns[2], 99LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 103LU)
);
}

/* Version - ns=2;i=104 */

static UA_StatusCode function_namespace_i4aas_inst_generated_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_104_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_104_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_104_variant_DataContents);
*variablenode_ns_2_i_104_variant_DataContents = UA_STRING_ALLOC("1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_104_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 104LU),
UA_NODEID_NUMERIC(ns[2], 103LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_104_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 104LU)
);
}

/* Revision - ns=2;i=105 */

static UA_StatusCode function_namespace_i4aas_inst_generated_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_105_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_105_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_105_variant_DataContents);
*variablenode_ns_2_i_105_variant_DataContents = UA_STRING_ALLOC("0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_105_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 105LU),
UA_NODEID_NUMERIC(ns[2], 103LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_105_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 105LU)
);
}

/* Identification - ns=2;i=100 */

static UA_StatusCode function_namespace_i4aas_inst_generated_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 100LU),
UA_NODEID_NUMERIC(ns[2], 99LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 100LU)
);
}

/* Id - ns=2;i=102 */

static UA_StatusCode function_namespace_i4aas_inst_generated_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_102_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_102_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_102_variant_DataContents);
*variablenode_ns_2_i_102_variant_DataContents = UA_STRING_ALLOC("http://phi-ware.com/ids/cd/1452_8172_4012_0957");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_102_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 102LU),
UA_NODEID_NUMERIC(ns[2], 100LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_102_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 102LU)
);
}

/* IdType - ns=2;i=101 */

static UA_StatusCode function_namespace_i4aas_inst_generated_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_101_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_101_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_101_variant_DataContents);
*variablenode_ns_2_i_101_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_101_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 101LU),
UA_NODEID_NUMERIC(ns[2], 100LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_101_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 101LU)
);
}

/* DictionaryEntries - ns=2;i=98 */

static UA_StatusCode function_namespace_i4aas_inst_generated_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DictionaryEntries");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DictionaryEntries");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[2], 96LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DictionaryEntries"),
UA_NODEID_NUMERIC(ns[0], 17591LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 98LU)
);
}

/* http://admin-shell.io/vdi/2770/1/0/DocumentClassification/ClassificationSystem - ns=2;i=328 */

static UA_StatusCode function_namespace_i4aas_inst_generated_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/DocumentClassification/ClassificationSystem");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/DocumentClassification/ClassificationSystem");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 328LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "http://admin-shell.io/vdi/2770/1/0/DocumentClassification/ClassificationSystem"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 328LU)
);
}

/* http://i40.customer.com/type/1/1/1A7B62B529F19152 - ns=2;i=324 */

static UA_StatusCode function_namespace_i4aas_inst_generated_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://i40.customer.com/type/1/1/1A7B62B529F19152");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "http://i40.customer.com/type/1/1/1A7B62B529F19152");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 324LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "http://i40.customer.com/type/1/1/1A7B62B529F19152"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 324LU)
);
}

/* http://admin-shell.io/vdi/2770/1/0/DocumentVersion - ns=2;i=329 */

static UA_StatusCode function_namespace_i4aas_inst_generated_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/DocumentVersion");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/DocumentVersion");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 329LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "http://admin-shell.io/vdi/2770/1/0/DocumentVersion"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 329LU)
);
}

/* http://admin-shell.io/vdi/2770/1/0/StoredDocumentRepresentation/DigitalFile - ns=2;i=332 */

static UA_StatusCode function_namespace_i4aas_inst_generated_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/StoredDocumentRepresentation/DigitalFile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/StoredDocumentRepresentation/DigitalFile");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 332LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "http://admin-shell.io/vdi/2770/1/0/StoredDocumentRepresentation/DigitalFile"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 332LU)
);
}

/* http://admin-shell.io/vdi/2770/1/0/Description/Title - ns=2;i=331 */

static UA_StatusCode function_namespace_i4aas_inst_generated_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/Description/Title");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/Description/Title");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 331LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "http://admin-shell.io/vdi/2770/1/0/Description/Title"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 331LU)
);
}

/* http://admin-shell.io/vdi/2770/1/0/DocumentId/Id - ns=2;i=326 */

static UA_StatusCode function_namespace_i4aas_inst_generated_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/DocumentId/Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/DocumentId/Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 326LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "http://admin-shell.io/vdi/2770/1/0/DocumentId/Id"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 326LU)
);
}

/* 0173-1#02-AAM556#002 - ns=2;i=322 */

static UA_StatusCode function_namespace_i4aas_inst_generated_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "0173-1#02-AAM556#002");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "0173-1#02-AAM556#002");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 322LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "0173-1#02-AAM556#002"),
UA_NODEID_NUMERIC(ns[1], 3LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 322LU)
);
}

/* http://admin-shell.io/vdi/2770/1/0/Document - ns=2;i=325 */

static UA_StatusCode function_namespace_i4aas_inst_generated_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/Document");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/Document");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 325LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "http://admin-shell.io/vdi/2770/1/0/Document"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 325LU)
);
}

/* 0173-1#02-AAO677#002 - ns=2;i=319 */

static UA_StatusCode function_namespace_i4aas_inst_generated_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "0173-1#02-AAO677#002");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "0173-1#02-AAO677#002");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 319LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "0173-1#02-AAO677#002"),
UA_NODEID_NUMERIC(ns[1], 3LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 319LU)
);
}

/* 0173-1#02-AAO676#003 - ns=2;i=321 */

static UA_StatusCode function_namespace_i4aas_inst_generated_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "0173-1#02-AAO676#003");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "0173-1#02-AAO676#003");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 321LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "0173-1#02-AAO676#003"),
UA_NODEID_NUMERIC(ns[1], 3LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 321LU)
);
}

/* http://admin-shell.io/vdi/2770/1/0/DocumentClassification/ClassName - ns=2;i=327 */

static UA_StatusCode function_namespace_i4aas_inst_generated_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/DocumentClassification/ClassName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/DocumentClassification/ClassName");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 327LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "http://admin-shell.io/vdi/2770/1/0/DocumentClassification/ClassName"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 327LU)
);
}

/* 0173-1#02-AAO694#001 - ns=2;i=320 */

static UA_StatusCode function_namespace_i4aas_inst_generated_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "0173-1#02-AAO694#001");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "0173-1#02-AAO694#001");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 320LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "0173-1#02-AAO694#001"),
UA_NODEID_NUMERIC(ns[1], 3LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 320LU)
);
}

/* https://www.hsu-hh.de/aut/aas/thumbnail - ns=2;i=323 */

static UA_StatusCode function_namespace_i4aas_inst_generated_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "https://www.hsu-hh.de/aut/aas/thumbnail");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "https://www.hsu-hh.de/aut/aas/thumbnail");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 323LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "https://www.hsu-hh.de/aut/aas/thumbnail"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 323LU)
);
}

/* http://admin-shell.io/vdi/2770/1/0/DocumentVersion/Language - ns=2;i=330 */

static UA_StatusCode function_namespace_i4aas_inst_generated_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/DocumentVersion/Language");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "http://admin-shell.io/vdi/2770/1/0/DocumentVersion/Language");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 330LU),
UA_NODEID_NUMERIC(ns[2], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "http://admin-shell.io/vdi/2770/1/0/DocumentVersion/Language"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 330LU)
);
}

/* AASROOT - ns=2;i=95 */

static UA_StatusCode function_namespace_i4aas_inst_generated_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AASROOT");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 95LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[0], "AASROOT"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 95LU)
);
}

/* AssetAdministrationShell:X-NUCLEO-IKSA01A-001 - ns=2;i=162 */

static UA_StatusCode function_namespace_i4aas_inst_generated_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AssetAdministrationShell:X-NUCLEO-IKSA01A-001");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AAS demo of enviromental sensor");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 162LU),
UA_NODEID_NUMERIC(ns[2], 95LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "X-NUCLEO-IKSA01A-001"),
UA_NODEID_NUMERIC(ns[1], 1024LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 162LU)
);
}

/* Submodel:modelBreakDown - ns=2;i=218 */

static UA_StatusCode function_namespace_i4aas_inst_generated_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Submodel:modelBreakDown");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 218LU),
UA_NODEID_NUMERIC(ns[2], 162LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "modelBreakDown"),
UA_NODEID_NUMERIC(ns[1], 1007LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 218LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 99LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 218LU)
);
}

/* Identification - ns=2;i=219 */

static UA_StatusCode function_namespace_i4aas_inst_generated_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 219LU),
UA_NODEID_NUMERIC(ns[2], 218LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 219LU)
);
}

/* IdType - ns=2;i=220 */

static UA_StatusCode function_namespace_i4aas_inst_generated_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_220_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_220_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_220_variant_DataContents);
*variablenode_ns_2_i_220_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_220_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 220LU),
UA_NODEID_NUMERIC(ns[2], 219LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_220_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 220LU)
);
}

/* Id - ns=2;i=221 */

static UA_StatusCode function_namespace_i4aas_inst_generated_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_221_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_221_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_221_variant_DataContents);
*variablenode_ns_2_i_221_variant_DataContents = UA_STRING_ALLOC("http://phi-ware.com/ids/sm/2232_8172_4012_2390");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_221_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 221LU),
UA_NODEID_NUMERIC(ns[2], 219LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_221_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 221LU)
);
}

/* SemanticId - ns=2;i=222 */

static UA_StatusCode function_namespace_i4aas_inst_generated_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 222LU),
UA_NODEID_NUMERIC(ns[2], 218LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 222LU)
);
}

/* Keys - ns=2;i=223 */

static UA_StatusCode function_namespace_i4aas_inst_generated_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_223_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_223_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_223_variant_DataContents);
*variablenode_ns_2_i_223_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]http://phi-ware.com/ids/cd/1452_8172_4012_0957");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_223_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 223LU),
UA_NODEID_NUMERIC(ns[2], 222LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_223_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 223LU)
);
}

/* Kind - ns=2;i=224 */

static UA_StatusCode function_namespace_i4aas_inst_generated_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_224_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_224_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_224_variant_DataContents);
*variablenode_ns_2_i_224_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_224_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 224LU),
UA_NODEID_NUMERIC(ns[2], 218LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_224_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 224LU)
);
}

/* range - ns=2;i=334 */

static UA_StatusCode function_namespace_i4aas_inst_generated_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);

UA_STACKARRAY(UA_Range, variablenode_ns_2_i_334_Range_0, 1);
UA_init(variablenode_ns_2_i_334_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
variablenode_ns_2_i_334_Range_0->low = (UA_Double) 260;
variablenode_ns_2_i_334_Range_0->high = (UA_Double) 1260;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_334_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
attr.displayName = UA_LOCALIZEDTEXT("", "range");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 334LU),
UA_NODEID_NUMERIC(ns[2], 224LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "range"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 334LU)
);
}

/* Administration - ns=2;i=133 */

static UA_StatusCode function_namespace_i4aas_inst_generated_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 133LU),
UA_NODEID_NUMERIC(ns[2], 128LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 133LU), UA_NODEID_NUMERIC(ns[0], 47LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 224LU), false);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 133LU)
);
}

/* Version - ns=2;i=134 */

static UA_StatusCode function_namespace_i4aas_inst_generated_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_134_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_134_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_134_variant_DataContents);
*variablenode_ns_2_i_134_variant_DataContents = UA_STRING_ALLOC("1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_134_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 134LU),
UA_NODEID_NUMERIC(ns[2], 133LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_134_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 134LU)
);
}

/* Revision - ns=2;i=135 */

static UA_StatusCode function_namespace_i4aas_inst_generated_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_135_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_135_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_135_variant_DataContents);
*variablenode_ns_2_i_135_variant_DataContents = UA_STRING_ALLOC("0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_135_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 135LU),
UA_NODEID_NUMERIC(ns[2], 133LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_135_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 135LU)
);
}

/* Submodel:OperationalData - ns=2;i=287 */

static UA_StatusCode function_namespace_i4aas_inst_generated_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Submodel:OperationalData");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Operational Data");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 287LU),
UA_NODEID_NUMERIC(ns[2], 162LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "OperationalData"),
UA_NODEID_NUMERIC(ns[1], 1007LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 287LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 106LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 287LU)
);
}

/* Identification - ns=2;i=289 */

static UA_StatusCode function_namespace_i4aas_inst_generated_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 289LU),
UA_NODEID_NUMERIC(ns[2], 287LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 289LU)
);
}

/* Id - ns=2;i=291 */

static UA_StatusCode function_namespace_i4aas_inst_generated_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_291_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_291_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_291_variant_DataContents);
*variablenode_ns_2_i_291_variant_DataContents = UA_STRING_ALLOC("http://phi-ware.com/ids/sm/7352_8103_4012_1544");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_291_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 291LU),
UA_NODEID_NUMERIC(ns[2], 289LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_291_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 291LU)
);
}

/* IdType - ns=2;i=290 */

static UA_StatusCode function_namespace_i4aas_inst_generated_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_290_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_290_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_290_variant_DataContents);
*variablenode_ns_2_i_290_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_290_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 290LU),
UA_NODEID_NUMERIC(ns[2], 289LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_290_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 290LU)
);
}

/* press01 - ns=2;i=305 */

static UA_StatusCode function_namespace_i4aas_inst_generated_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "press01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 305LU),
UA_NODEID_NUMERIC(ns[2], 287LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "press01"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 305LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 128LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 305LU)
);
}

/* ValueType - ns=2;i=310 */

static UA_StatusCode function_namespace_i4aas_inst_generated_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_310_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_310_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_310_variant_DataContents);
*variablenode_ns_2_i_310_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_310_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 310LU),
UA_NODEID_NUMERIC(ns[2], 305LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_310_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 310LU)
);
}

/* Category - ns=2;i=306 */

static UA_StatusCode function_namespace_i4aas_inst_generated_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_306_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_306_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_306_variant_DataContents);
*variablenode_ns_2_i_306_variant_DataContents = UA_STRING_ALLOC("VARIABLE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_306_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 306LU),
UA_NODEID_NUMERIC(ns[2], 305LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_306_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 306LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 306LU)
);
}

/* SemanticId - ns=2;i=307 */

static UA_StatusCode function_namespace_i4aas_inst_generated_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 307LU),
UA_NODEID_NUMERIC(ns[2], 305LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 307LU)
);
}

/* Keys - ns=2;i=308 */

static UA_StatusCode function_namespace_i4aas_inst_generated_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_308_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_308_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_308_variant_DataContents);
*variablenode_ns_2_i_308_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]www.phi-ware.com/ids/cd/1231_2111_5012_3596");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_308_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 308LU),
UA_NODEID_NUMERIC(ns[2], 307LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_308_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 308LU)
);
}

/* Value - ns=2;i=311 */

static UA_StatusCode function_namespace_i4aas_inst_generated_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_311_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_311_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_311_variant_DataContents);
*variablenode_ns_2_i_311_variant_DataContents = UA_STRING_ALLOC("1012");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_311_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 311LU),
UA_NODEID_NUMERIC(ns[2], 305LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_311_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 311LU)
);
}

/* Kind - ns=2;i=309 */

static UA_StatusCode function_namespace_i4aas_inst_generated_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_309_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_309_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_309_variant_DataContents);
*variablenode_ns_2_i_309_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_309_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 309LU),
UA_NODEID_NUMERIC(ns[2], 305LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_309_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 309LU)
);
}

/* Administration - ns=2;i=292 */

static UA_StatusCode function_namespace_i4aas_inst_generated_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 292LU),
UA_NODEID_NUMERIC(ns[2], 287LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 292LU)
);
}

/* Revision - ns=2;i=294 */

static UA_StatusCode function_namespace_i4aas_inst_generated_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_294_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_294_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_294_variant_DataContents);
*variablenode_ns_2_i_294_variant_DataContents = UA_STRING_ALLOC("0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_294_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 294LU),
UA_NODEID_NUMERIC(ns[2], 292LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_294_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 294LU)
);
}

/* Version - ns=2;i=293 */

static UA_StatusCode function_namespace_i4aas_inst_generated_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_293_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_293_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_293_variant_DataContents);
*variablenode_ns_2_i_293_variant_DataContents = UA_STRING_ALLOC("1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_293_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 293LU),
UA_NODEID_NUMERIC(ns[2], 292LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_293_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 293LU)
);
}

/* hum01 - ns=2;i=312 */

static UA_StatusCode function_namespace_i4aas_inst_generated_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "hum01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 312LU),
UA_NODEID_NUMERIC(ns[2], 287LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "hum01"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 312LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 145LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 312LU)
);
}

/* Category - ns=2;i=313 */

static UA_StatusCode function_namespace_i4aas_inst_generated_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_313_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_313_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_313_variant_DataContents);
*variablenode_ns_2_i_313_variant_DataContents = UA_STRING_ALLOC("VARIABLE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_313_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 313LU),
UA_NODEID_NUMERIC(ns[2], 312LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_313_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 313LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 313LU)
);
}

/* Kind - ns=2;i=316 */

static UA_StatusCode function_namespace_i4aas_inst_generated_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_316_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_316_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_316_variant_DataContents);
*variablenode_ns_2_i_316_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_316_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 316LU),
UA_NODEID_NUMERIC(ns[2], 312LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_316_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 316LU)
);
}

/* Value - ns=2;i=318 */

static UA_StatusCode function_namespace_i4aas_inst_generated_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_318_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_318_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_318_variant_DataContents);
*variablenode_ns_2_i_318_variant_DataContents = UA_STRING_ALLOC("64.5");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_318_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 318LU),
UA_NODEID_NUMERIC(ns[2], 312LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_318_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 318LU)
);
}

/* ValueType - ns=2;i=317 */

static UA_StatusCode function_namespace_i4aas_inst_generated_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_317_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_317_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_317_variant_DataContents);
*variablenode_ns_2_i_317_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_317_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 317LU),
UA_NODEID_NUMERIC(ns[2], 312LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_317_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 317LU)
);
}

/* SemanticId - ns=2;i=314 */

static UA_StatusCode function_namespace_i4aas_inst_generated_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 314LU),
UA_NODEID_NUMERIC(ns[2], 312LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 314LU)
);
}

/* Keys - ns=2;i=315 */

static UA_StatusCode function_namespace_i4aas_inst_generated_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_315_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_315_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_315_variant_DataContents);
*variablenode_ns_2_i_315_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]www.phi-ware.com/ids/cd/1151_2111_5012_6973");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_315_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 315LU),
UA_NODEID_NUMERIC(ns[2], 314LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_315_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 315LU)
);
}

/* temp01 - ns=2;i=298 */

static UA_StatusCode function_namespace_i4aas_inst_generated_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "temp01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 298LU),
UA_NODEID_NUMERIC(ns[2], 287LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "temp01"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 298LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 111LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 298LU)
);
}

/* Category - ns=2;i=299 */

static UA_StatusCode function_namespace_i4aas_inst_generated_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_299_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_299_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_299_variant_DataContents);
*variablenode_ns_2_i_299_variant_DataContents = UA_STRING_ALLOC("VARIABLE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_299_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 299LU),
UA_NODEID_NUMERIC(ns[2], 298LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_299_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 299LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 299LU)
);
}

/* Kind - ns=2;i=302 */

static UA_StatusCode function_namespace_i4aas_inst_generated_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_302_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_302_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_302_variant_DataContents);
*variablenode_ns_2_i_302_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_302_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 302LU),
UA_NODEID_NUMERIC(ns[2], 298LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_302_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 302LU)
);
}

/* SemanticId - ns=2;i=300 */

static UA_StatusCode function_namespace_i4aas_inst_generated_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 300LU),
UA_NODEID_NUMERIC(ns[2], 298LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 300LU)
);
}

/* Keys - ns=2;i=301 */

static UA_StatusCode function_namespace_i4aas_inst_generated_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_301_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_301_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_301_variant_DataContents);
*variablenode_ns_2_i_301_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]www.phi-ware.com/ids/cd/3195_1111_5012_8206");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_301_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 301LU),
UA_NODEID_NUMERIC(ns[2], 300LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_301_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 301LU)
);
}

/* Value - ns=2;i=304 */

static UA_StatusCode function_namespace_i4aas_inst_generated_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_304_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_304_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_304_variant_DataContents);
*variablenode_ns_2_i_304_variant_DataContents = UA_STRING_ALLOC("23.5");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_304_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 304LU),
UA_NODEID_NUMERIC(ns[2], 298LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_304_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 304LU)
);
}

/* ValueType - ns=2;i=303 */

static UA_StatusCode function_namespace_i4aas_inst_generated_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_303_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_303_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_303_variant_DataContents);
*variablenode_ns_2_i_303_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_303_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 303LU),
UA_NODEID_NUMERIC(ns[2], 298LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_303_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 303LU)
);
}

/* Kind - ns=2;i=297 */

static UA_StatusCode function_namespace_i4aas_inst_generated_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_297_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_297_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_297_variant_DataContents);
*variablenode_ns_2_i_297_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_297_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 297LU),
UA_NODEID_NUMERIC(ns[2], 287LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_297_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 297LU)
);
}

/* Category - ns=2;i=288 */

static UA_StatusCode function_namespace_i4aas_inst_generated_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_288_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_288_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_288_variant_DataContents);
*variablenode_ns_2_i_288_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_288_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 288LU),
UA_NODEID_NUMERIC(ns[2], 287LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_288_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 288LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 288LU)
);
}

/* SemanticId - ns=2;i=295 */

static UA_StatusCode function_namespace_i4aas_inst_generated_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 295LU),
UA_NODEID_NUMERIC(ns[2], 287LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 295LU)
);
}

/* Keys - ns=2;i=296 */

static UA_StatusCode function_namespace_i4aas_inst_generated_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_296_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_296_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_296_variant_DataContents);
*variablenode_ns_2_i_296_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]http://phi-ware.com/ids/cd/OperationalData/Submodel/1/0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_296_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 296LU),
UA_NODEID_NUMERIC(ns[2], 295LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_296_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 296LU)
);
}

/* Submodel:Identification - ns=2;i=176 */

static UA_StatusCode function_namespace_i4aas_inst_generated_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Submodel:Identification");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 176LU),
UA_NODEID_NUMERIC(ns[2], 162LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1007LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 176LU)
);
}

/* ProductCode - ns=2;i=197 */

static UA_StatusCode function_namespace_i4aas_inst_generated_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[2], 176LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ProductCode"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 197LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 321LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 197LU)
);
}

/* Category - ns=2;i=198 */

static UA_StatusCode function_namespace_i4aas_inst_generated_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_198_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_198_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_198_variant_DataContents);
*variablenode_ns_2_i_198_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_198_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 198LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_198_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 198LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 198LU)
);
}

/* Kind - ns=2;i=201 */

static UA_StatusCode function_namespace_i4aas_inst_generated_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_201_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_201_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_201_variant_DataContents);
*variablenode_ns_2_i_201_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_201_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 201LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_201_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 201LU)
);
}

/* Value - ns=2;i=203 */

static UA_StatusCode function_namespace_i4aas_inst_generated_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_203_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_203_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_203_variant_DataContents);
*variablenode_ns_2_i_203_variant_DataContents = UA_STRING_ALLOC("ENV-SEN-STM32-A");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_203_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 203LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_203_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 203LU)
);
}

/* SemanticId - ns=2;i=199 */

static UA_StatusCode function_namespace_i4aas_inst_generated_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 199LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 199LU)
);
}

/* Keys - ns=2;i=200 */

static UA_StatusCode function_namespace_i4aas_inst_generated_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_200_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_200_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_200_variant_DataContents);
*variablenode_ns_2_i_200_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(no-local)[IRDI]0173-1#02-AAO676#003");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_200_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 200LU),
UA_NODEID_NUMERIC(ns[2], 199LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_200_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 200LU)
);
}

/* ValueType - ns=2;i=202 */

static UA_StatusCode function_namespace_i4aas_inst_generated_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_202_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_202_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_202_variant_DataContents);
*variablenode_ns_2_i_202_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_202_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 202LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_202_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 202LU)
);
}

/* Manufacturer - ns=2;i=183 */

static UA_StatusCode function_namespace_i4aas_inst_generated_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 183LU),
UA_NODEID_NUMERIC(ns[2], 176LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Manufacturer"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 183LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 319LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 183LU)
);
}

/* SemanticId - ns=2;i=185 */

static UA_StatusCode function_namespace_i4aas_inst_generated_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 185LU),
UA_NODEID_NUMERIC(ns[2], 183LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 185LU)
);
}

/* Keys - ns=2;i=186 */

static UA_StatusCode function_namespace_i4aas_inst_generated_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_186_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_186_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_186_variant_DataContents);
*variablenode_ns_2_i_186_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(no-local)[IRDI]0173-1#02-AAO677#002");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_186_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 186LU),
UA_NODEID_NUMERIC(ns[2], 185LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_186_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 186LU)
);
}

/* Value - ns=2;i=189 */

static UA_StatusCode function_namespace_i4aas_inst_generated_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_189_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_189_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_189_variant_DataContents);
*variablenode_ns_2_i_189_variant_DataContents = UA_STRING_ALLOC("phi-ware s.r.o.");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_189_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 189LU),
UA_NODEID_NUMERIC(ns[2], 183LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_189_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 189LU)
);
}

/* Category - ns=2;i=184 */

static UA_StatusCode function_namespace_i4aas_inst_generated_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_184_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_184_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_184_variant_DataContents);
*variablenode_ns_2_i_184_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_184_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 184LU),
UA_NODEID_NUMERIC(ns[2], 183LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_184_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 184LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 184LU)
);
}

/* ValueType - ns=2;i=188 */

static UA_StatusCode function_namespace_i4aas_inst_generated_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_188_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_188_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_188_variant_DataContents);
*variablenode_ns_2_i_188_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_188_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 188LU),
UA_NODEID_NUMERIC(ns[2], 183LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_188_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 188LU)
);
}

/* Kind - ns=2;i=187 */

static UA_StatusCode function_namespace_i4aas_inst_generated_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_187_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_187_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_187_variant_DataContents);
*variablenode_ns_2_i_187_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_187_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 187LU),
UA_NODEID_NUMERIC(ns[2], 183LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_187_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 187LU)
);
}

/* ManufacturerURI - ns=2;i=190 */

static UA_StatusCode function_namespace_i4aas_inst_generated_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerURI");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 190LU),
UA_NODEID_NUMERIC(ns[2], 176LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ManufacturerURI"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 190LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 320LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 190LU)
);
}

/* SemanticId - ns=2;i=192 */

static UA_StatusCode function_namespace_i4aas_inst_generated_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 192LU),
UA_NODEID_NUMERIC(ns[2], 190LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 192LU)
);
}

/* Keys - ns=2;i=193 */

static UA_StatusCode function_namespace_i4aas_inst_generated_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_193_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_193_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_193_variant_DataContents);
*variablenode_ns_2_i_193_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(no-local)[IRDI]0173-1#02-AAO694#001");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_193_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 193LU),
UA_NODEID_NUMERIC(ns[2], 192LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_193_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 193LU)
);
}

/* Kind - ns=2;i=194 */

static UA_StatusCode function_namespace_i4aas_inst_generated_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_194_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_194_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_194_variant_DataContents);
*variablenode_ns_2_i_194_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_194_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 194LU),
UA_NODEID_NUMERIC(ns[2], 190LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_194_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 194LU)
);
}

/* ValueType - ns=2;i=195 */

static UA_StatusCode function_namespace_i4aas_inst_generated_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_195_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_195_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_195_variant_DataContents);
*variablenode_ns_2_i_195_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_195_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 195LU),
UA_NODEID_NUMERIC(ns[2], 190LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_195_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 195LU)
);
}

/* Value - ns=2;i=196 */

static UA_StatusCode function_namespace_i4aas_inst_generated_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_196_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_196_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_196_variant_DataContents);
*variablenode_ns_2_i_196_variant_DataContents = UA_STRING_ALLOC("www.phi-ware.com");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_196_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 196LU),
UA_NODEID_NUMERIC(ns[2], 190LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_196_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 196LU)
);
}

/* Category - ns=2;i=191 */

static UA_StatusCode function_namespace_i4aas_inst_generated_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_191_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_191_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_191_variant_DataContents);
*variablenode_ns_2_i_191_variant_DataContents = UA_STRING_ALLOC("PARAMETER");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_191_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 191LU),
UA_NODEID_NUMERIC(ns[2], 190LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_191_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 191LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 191LU)
);
}

/* Kind - ns=2;i=182 */

static UA_StatusCode function_namespace_i4aas_inst_generated_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_182_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_182_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_182_variant_DataContents);
*variablenode_ns_2_i_182_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_182_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 182LU),
UA_NODEID_NUMERIC(ns[2], 176LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_182_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 182LU)
);
}

/* Identification - ns=2;i=177 */

static UA_StatusCode function_namespace_i4aas_inst_generated_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 177LU),
UA_NODEID_NUMERIC(ns[2], 176LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 177LU)
);
}

/* IdType - ns=2;i=178 */

static UA_StatusCode function_namespace_i4aas_inst_generated_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_178_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_178_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_178_variant_DataContents);
*variablenode_ns_2_i_178_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_178_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 178LU),
UA_NODEID_NUMERIC(ns[2], 177LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_178_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 178LU)
);
}

/* Id - ns=2;i=179 */

static UA_StatusCode function_namespace_i4aas_inst_generated_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_179_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_179_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_179_variant_DataContents);
*variablenode_ns_2_i_179_variant_DataContents = UA_STRING_ALLOC("www.example.com/ids/sm/8343_2111_5012_8114");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_179_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 179LU),
UA_NODEID_NUMERIC(ns[2], 177LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_179_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 179LU)
);
}

/* SemanticId - ns=2;i=180 */

static UA_StatusCode function_namespace_i4aas_inst_generated_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 180LU),
UA_NODEID_NUMERIC(ns[2], 176LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 180LU)
);
}

/* Keys - ns=2;i=181 */

static UA_StatusCode function_namespace_i4aas_inst_generated_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 181LU),
UA_NODEID_NUMERIC(ns[2], 180LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 181LU)
);
}

/* TypThumbnail - ns=2;i=211 */

static UA_StatusCode function_namespace_i4aas_inst_generated_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TypThumbnail");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 211LU),
UA_NODEID_NUMERIC(ns[2], 176LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "TypThumbnail"),
UA_NODEID_NUMERIC(ns[1], 1013LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 211LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 323LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 211LU)
);
}

/* MimeType - ns=2;i=216 */

static UA_StatusCode function_namespace_i4aas_inst_generated_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_216_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_216_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_216_variant_DataContents);
*variablenode_ns_2_i_216_variant_DataContents = UA_STRING_ALLOC("image/jpeg");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_216_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "MimeType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 216LU),
UA_NODEID_NUMERIC(ns[2], 211LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MimeType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_216_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 216LU)
);
}

/* SemanticId - ns=2;i=213 */

static UA_StatusCode function_namespace_i4aas_inst_generated_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 213LU),
UA_NODEID_NUMERIC(ns[2], 211LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 213LU)
);
}

/* Keys - ns=2;i=214 */

static UA_StatusCode function_namespace_i4aas_inst_generated_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_214_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_214_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_214_variant_DataContents);
*variablenode_ns_2_i_214_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]https://www.hsu-hh.de/aut/aas/thumbnail");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_214_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 214LU),
UA_NODEID_NUMERIC(ns[2], 213LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_214_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 214LU)
);
}

/* Kind - ns=2;i=215 */

static UA_StatusCode function_namespace_i4aas_inst_generated_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_215_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_215_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_215_variant_DataContents);
*variablenode_ns_2_i_215_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_215_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 215LU),
UA_NODEID_NUMERIC(ns[2], 211LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_215_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 215LU)
);
}

/* Category - ns=2;i=212 */

static UA_StatusCode function_namespace_i4aas_inst_generated_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_212_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_212_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_212_variant_DataContents);
*variablenode_ns_2_i_212_variant_DataContents = UA_STRING_ALLOC("PARAMETER");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_212_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 212LU),
UA_NODEID_NUMERIC(ns[2], 211LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_212_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 212LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 212LU)
);
}

/* Value - ns=2;i=217 */

static UA_StatusCode function_namespace_i4aas_inst_generated_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_217_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_217_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_217_variant_DataContents);
*variablenode_ns_2_i_217_variant_DataContents = UA_STRING_ALLOC("/STM32DISCO.jpg");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_217_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 217LU),
UA_NODEID_NUMERIC(ns[2], 211LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_217_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 217LU)
);
}

/* SerialNumber - ns=2;i=204 */

static UA_StatusCode function_namespace_i4aas_inst_generated_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 204LU),
UA_NODEID_NUMERIC(ns[2], 176LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SerialNumber"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 204LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 322LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 204LU)
);
}

/* Value - ns=2;i=210 */

static UA_StatusCode function_namespace_i4aas_inst_generated_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_210_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_210_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_210_variant_DataContents);
*variablenode_ns_2_i_210_variant_DataContents = UA_STRING_ALLOC("ENV-SEN-A-000-001");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_210_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 210LU),
UA_NODEID_NUMERIC(ns[2], 204LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_210_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 210LU)
);
}

/* Category - ns=2;i=205 */

static UA_StatusCode function_namespace_i4aas_inst_generated_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_205_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_205_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_205_variant_DataContents);
*variablenode_ns_2_i_205_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_205_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 205LU),
UA_NODEID_NUMERIC(ns[2], 204LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_205_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 205LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 205LU)
);
}

/* ValueType - ns=2;i=209 */

static UA_StatusCode function_namespace_i4aas_inst_generated_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_209_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_209_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_209_variant_DataContents);
*variablenode_ns_2_i_209_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_209_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 209LU),
UA_NODEID_NUMERIC(ns[2], 204LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_209_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 209LU)
);
}

/* range - ns=2;i=333 */

static UA_StatusCode function_namespace_i4aas_inst_generated_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);

UA_STACKARRAY(UA_Range, variablenode_ns_2_i_333_Range_0, 1);
UA_init(variablenode_ns_2_i_333_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
variablenode_ns_2_i_333_Range_0->low = (UA_Double) -40;
variablenode_ns_2_i_333_Range_0->high = (UA_Double) 120;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_333_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
attr.displayName = UA_LOCALIZEDTEXT("", "range");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 333LU),
UA_NODEID_NUMERIC(ns[2], 209LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "range"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 333LU)
);
}

/* IdType - ns=2;i=109 */

static UA_StatusCode function_namespace_i4aas_inst_generated_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_109_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_109_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_109_variant_DataContents);
*variablenode_ns_2_i_109_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_109_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 109LU),
UA_NODEID_NUMERIC(ns[2], 108LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_109_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 109LU), UA_NODEID_NUMERIC(ns[0], 47LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 209LU), false);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 109LU)
);
}

/* Kind - ns=2;i=208 */

static UA_StatusCode function_namespace_i4aas_inst_generated_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_208_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_208_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_208_variant_DataContents);
*variablenode_ns_2_i_208_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_208_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 208LU),
UA_NODEID_NUMERIC(ns[2], 204LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_208_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 208LU)
);
}

/* SemanticId - ns=2;i=206 */

static UA_StatusCode function_namespace_i4aas_inst_generated_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 206LU),
UA_NODEID_NUMERIC(ns[2], 204LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 206LU)
);
}

/* Keys - ns=2;i=207 */

static UA_StatusCode function_namespace_i4aas_inst_generated_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_207_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_207_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_207_variant_DataContents);
*variablenode_ns_2_i_207_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(no-local)[IRDI]0173-1#02-AAM556#002");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_207_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 207LU),
UA_NODEID_NUMERIC(ns[2], 206LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_207_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 207LU)
);
}

/* DerivedFrom - ns=2;i=169 */

static UA_StatusCode function_namespace_i4aas_inst_generated_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DerivedFrom");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DerivedFrom");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 169LU),
UA_NODEID_NUMERIC(ns[2], 162LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DerivedFrom"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 169LU)
);
}

/* Keys - ns=2;i=170 */

static UA_StatusCode function_namespace_i4aas_inst_generated_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 170LU),
UA_NODEID_NUMERIC(ns[2], 169LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 170LU)
);
}

/* Asset - ns=2;i=171 */

static UA_StatusCode function_namespace_i4aas_inst_generated_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Asset");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "STM32 enviroment sensor");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 171LU),
UA_NODEID_NUMERIC(ns[2], 162LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Asset"),
UA_NODEID_NUMERIC(ns[1], 1023LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 171LU)
);
}

/* Kind - ns=2;i=175 */

static UA_StatusCode function_namespace_i4aas_inst_generated_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_175_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_175_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_175_variant_DataContents);
*variablenode_ns_2_i_175_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_175_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 175LU),
UA_NODEID_NUMERIC(ns[2], 171LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_175_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 175LU)
);
}

/* Identification - ns=2;i=172 */

static UA_StatusCode function_namespace_i4aas_inst_generated_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 172LU),
UA_NODEID_NUMERIC(ns[2], 171LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 172LU)
);
}

/* Id - ns=2;i=174 */

static UA_StatusCode function_namespace_i4aas_inst_generated_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_174_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_174_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_174_variant_DataContents);
*variablenode_ns_2_i_174_variant_DataContents = UA_STRING_ALLOC("http://phi-ware.com/ids/asset/3012_8172_4012_4053");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_174_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 174LU),
UA_NODEID_NUMERIC(ns[2], 172LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_174_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 174LU)
);
}

/* IdType - ns=2;i=173 */

static UA_StatusCode function_namespace_i4aas_inst_generated_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_173_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_173_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_173_variant_DataContents);
*variablenode_ns_2_i_173_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_173_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 173LU),
UA_NODEID_NUMERIC(ns[2], 172LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_173_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 173LU)
);
}

/* Identification - ns=2;i=163 */

static UA_StatusCode function_namespace_i4aas_inst_generated_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 163LU),
UA_NODEID_NUMERIC(ns[2], 162LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 163LU)
);
}

/* IdType - ns=2;i=164 */

static UA_StatusCode function_namespace_i4aas_inst_generated_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_164_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_164_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_164_variant_DataContents);
*variablenode_ns_2_i_164_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_164_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 164LU),
UA_NODEID_NUMERIC(ns[2], 163LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_164_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 164LU)
);
}

/* Id - ns=2;i=165 */

static UA_StatusCode function_namespace_i4aas_inst_generated_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_165_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_165_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_165_variant_DataContents);
*variablenode_ns_2_i_165_variant_DataContents = UA_STRING_ALLOC("http://phi-ware.com/ids/aas/6371_8172_4012_9968");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_165_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 165LU),
UA_NODEID_NUMERIC(ns[2], 163LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_165_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 165LU)
);
}

/* Submodel:Documentation - ns=2;i=225 */

static UA_StatusCode function_namespace_i4aas_inst_generated_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Submodel:Documentation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 225LU),
UA_NODEID_NUMERIC(ns[2], 162LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Documentation"),
UA_NODEID_NUMERIC(ns[1], 1007LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 225LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 324LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 225LU)
);
}

/* Document01 - ns=2;i=233 */

static UA_StatusCode function_namespace_i4aas_inst_generated_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Document01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 233LU),
UA_NODEID_NUMERIC(ns[2], 225LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Document01"),
UA_NODEID_NUMERIC(ns[1], 1010LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 233LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 325LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 233LU)
);
}

/* AllowDuplicates - ns=2;i=238 */

static UA_StatusCode function_namespace_i4aas_inst_generated_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_2_i_238_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_238_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_238_variant_DataContents);
*variablenode_ns_2_i_238_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_238_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 238LU),
UA_NODEID_NUMERIC(ns[2], 233LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_238_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 238LU)
);
}

/* SemanticId - ns=2;i=235 */

static UA_StatusCode function_namespace_i4aas_inst_generated_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 235LU),
UA_NODEID_NUMERIC(ns[2], 233LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 235LU)
);
}

/* Keys - ns=2;i=236 */

static UA_StatusCode function_namespace_i4aas_inst_generated_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_236_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_236_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_236_variant_DataContents);
*variablenode_ns_2_i_236_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]http://admin-shell.io/vdi/2770/1/0/Document");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_236_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 236LU),
UA_NODEID_NUMERIC(ns[2], 235LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_236_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 236LU)
);
}

/* Category - ns=2;i=234 */

static UA_StatusCode function_namespace_i4aas_inst_generated_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_234_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_234_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_234_variant_DataContents);
*variablenode_ns_2_i_234_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_234_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 234LU),
UA_NODEID_NUMERIC(ns[2], 233LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_234_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 234LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 234LU)
);
}

/* DocumentVersion01 - ns=2;i=260 */

static UA_StatusCode function_namespace_i4aas_inst_generated_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DocumentVersion01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 260LU),
UA_NODEID_NUMERIC(ns[2], 233LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DocumentVersion01"),
UA_NODEID_NUMERIC(ns[1], 1010LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 260LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 329LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 260LU)
);
}

/* AllowDuplicates - ns=2;i=265 */

static UA_StatusCode function_namespace_i4aas_inst_generated_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_2_i_265_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_265_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_265_variant_DataContents);
*variablenode_ns_2_i_265_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_265_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 265LU),
UA_NODEID_NUMERIC(ns[2], 260LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_265_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 265LU)
);
}

/* Kind - ns=2;i=264 */

static UA_StatusCode function_namespace_i4aas_inst_generated_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_264_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_264_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_264_variant_DataContents);
*variablenode_ns_2_i_264_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_264_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 264LU),
UA_NODEID_NUMERIC(ns[2], 260LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_264_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 264LU)
);
}

/* Title - ns=2;i=273 */

static UA_StatusCode function_namespace_i4aas_inst_generated_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Title");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 273LU),
UA_NODEID_NUMERIC(ns[2], 260LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Title"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 273LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 331LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 273LU)
);
}

/* Value - ns=2;i=279 */

static UA_StatusCode function_namespace_i4aas_inst_generated_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_279_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_279_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_279_variant_DataContents);
*variablenode_ns_2_i_279_variant_DataContents = UA_STRING_ALLOC("Enviromental Sensor");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_279_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 279LU),
UA_NODEID_NUMERIC(ns[2], 273LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_279_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 279LU)
);
}

/* Kind - ns=2;i=277 */

static UA_StatusCode function_namespace_i4aas_inst_generated_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_277_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_277_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_277_variant_DataContents);
*variablenode_ns_2_i_277_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_277_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 277LU),
UA_NODEID_NUMERIC(ns[2], 273LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_277_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 277LU)
);
}

/* SemanticId - ns=2;i=275 */

static UA_StatusCode function_namespace_i4aas_inst_generated_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 275LU),
UA_NODEID_NUMERIC(ns[2], 273LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 275LU)
);
}

/* Keys - ns=2;i=276 */

static UA_StatusCode function_namespace_i4aas_inst_generated_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_276_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_276_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_276_variant_DataContents);
*variablenode_ns_2_i_276_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]http://admin-shell.io/vdi/2770/1/0/Description/Title");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_276_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 276LU),
UA_NODEID_NUMERIC(ns[2], 275LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_276_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 276LU)
);
}

/* ValueType - ns=2;i=278 */

static UA_StatusCode function_namespace_i4aas_inst_generated_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_278_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_278_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_278_variant_DataContents);
*variablenode_ns_2_i_278_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_278_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 278LU),
UA_NODEID_NUMERIC(ns[2], 273LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_278_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 278LU)
);
}

/* Category - ns=2;i=274 */

static UA_StatusCode function_namespace_i4aas_inst_generated_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_274_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_274_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_274_variant_DataContents);
*variablenode_ns_2_i_274_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_274_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 274LU),
UA_NODEID_NUMERIC(ns[2], 273LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_274_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 274LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 274LU)
);
}

/* SemanticId - ns=2;i=262 */

static UA_StatusCode function_namespace_i4aas_inst_generated_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 262LU),
UA_NODEID_NUMERIC(ns[2], 260LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 262LU)
);
}

/* Keys - ns=2;i=263 */

static UA_StatusCode function_namespace_i4aas_inst_generated_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_263_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_263_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_263_variant_DataContents);
*variablenode_ns_2_i_263_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]http://admin-shell.io/vdi/2770/1/0/DocumentVersion");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_263_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 263LU),
UA_NODEID_NUMERIC(ns[2], 262LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_263_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 263LU)
);
}

/* Language01 - ns=2;i=266 */

static UA_StatusCode function_namespace_i4aas_inst_generated_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Language01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 266LU),
UA_NODEID_NUMERIC(ns[2], 260LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Language01"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 266LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 330LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 266LU)
);
}

/* Kind - ns=2;i=270 */

static UA_StatusCode function_namespace_i4aas_inst_generated_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_270_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_270_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_270_variant_DataContents);
*variablenode_ns_2_i_270_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_270_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 270LU),
UA_NODEID_NUMERIC(ns[2], 266LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_270_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 270LU)
);
}

/* Value - ns=2;i=272 */

static UA_StatusCode function_namespace_i4aas_inst_generated_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_272_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_272_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_272_variant_DataContents);
*variablenode_ns_2_i_272_variant_DataContents = UA_STRING_ALLOC("EN");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_272_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 272LU),
UA_NODEID_NUMERIC(ns[2], 266LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_272_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 272LU)
);
}

/* Category - ns=2;i=267 */

static UA_StatusCode function_namespace_i4aas_inst_generated_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_267_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_267_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_267_variant_DataContents);
*variablenode_ns_2_i_267_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_267_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 267LU),
UA_NODEID_NUMERIC(ns[2], 266LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_267_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 267LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 267LU)
);
}

/* SemanticId - ns=2;i=268 */

static UA_StatusCode function_namespace_i4aas_inst_generated_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 268LU),
UA_NODEID_NUMERIC(ns[2], 266LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 268LU)
);
}

/* Keys - ns=2;i=269 */

static UA_StatusCode function_namespace_i4aas_inst_generated_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_269_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_269_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_269_variant_DataContents);
*variablenode_ns_2_i_269_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]http://admin-shell.io/vdi/2770/1/0/DocumentVersion/Language");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_269_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 269LU),
UA_NODEID_NUMERIC(ns[2], 268LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_269_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 269LU)
);
}

/* ValueType - ns=2;i=271 */

static UA_StatusCode function_namespace_i4aas_inst_generated_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_271_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_271_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_271_variant_DataContents);
*variablenode_ns_2_i_271_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_271_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 271LU),
UA_NODEID_NUMERIC(ns[2], 266LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_271_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 271LU)
);
}

/* DigitalFile - ns=2;i=280 */

static UA_StatusCode function_namespace_i4aas_inst_generated_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DigitalFile");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 280LU),
UA_NODEID_NUMERIC(ns[2], 260LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DigitalFile"),
UA_NODEID_NUMERIC(ns[1], 1013LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 280LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 332LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 280LU)
);
}

/* Value - ns=2;i=286 */

static UA_StatusCode function_namespace_i4aas_inst_generated_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_286_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_286_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_286_variant_DataContents);
*variablenode_ns_2_i_286_variant_DataContents = UA_STRING_ALLOC("/aasx/files/Document01.pdf");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_286_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 286LU),
UA_NODEID_NUMERIC(ns[2], 280LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_286_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 286LU)
);
}

/* Category - ns=2;i=281 */

static UA_StatusCode function_namespace_i4aas_inst_generated_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_281_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_281_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_281_variant_DataContents);
*variablenode_ns_2_i_281_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_281_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 281LU),
UA_NODEID_NUMERIC(ns[2], 280LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_281_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 281LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 281LU)
);
}

/* MimeType - ns=2;i=285 */

static UA_StatusCode function_namespace_i4aas_inst_generated_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_285_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_285_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_285_variant_DataContents);
*variablenode_ns_2_i_285_variant_DataContents = UA_STRING_ALLOC("application/pdf");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_285_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "MimeType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 285LU),
UA_NODEID_NUMERIC(ns[2], 280LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MimeType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_285_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 285LU)
);
}

/* SemanticId - ns=2;i=282 */

static UA_StatusCode function_namespace_i4aas_inst_generated_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 282LU),
UA_NODEID_NUMERIC(ns[2], 280LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 282LU)
);
}

/* Keys - ns=2;i=283 */

static UA_StatusCode function_namespace_i4aas_inst_generated_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_283_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_283_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_283_variant_DataContents);
*variablenode_ns_2_i_283_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]http://admin-shell.io/vdi/2770/1/0/StoredDocumentRepresentation/DigitalFile");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_283_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 283LU),
UA_NODEID_NUMERIC(ns[2], 282LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_283_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 283LU)
);
}

/* Kind - ns=2;i=284 */

static UA_StatusCode function_namespace_i4aas_inst_generated_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_284_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_284_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_284_variant_DataContents);
*variablenode_ns_2_i_284_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_284_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 284LU),
UA_NODEID_NUMERIC(ns[2], 280LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_284_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 284LU)
);
}

/* Category - ns=2;i=261 */

static UA_StatusCode function_namespace_i4aas_inst_generated_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_261_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_261_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_261_variant_DataContents);
*variablenode_ns_2_i_261_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_261_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 261LU),
UA_NODEID_NUMERIC(ns[2], 260LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_261_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 261LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 261LU)
);
}

/* Documentid - ns=2;i=239 */

static UA_StatusCode function_namespace_i4aas_inst_generated_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Documentid");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 239LU),
UA_NODEID_NUMERIC(ns[2], 233LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Documentid"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 239LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 326LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 239LU)
);
}

/* ValueType - ns=2;i=244 */

static UA_StatusCode function_namespace_i4aas_inst_generated_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_244_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_244_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_244_variant_DataContents);
*variablenode_ns_2_i_244_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_244_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 244LU),
UA_NODEID_NUMERIC(ns[2], 239LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_244_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 244LU)
);
}

/* SemanticId - ns=2;i=241 */

static UA_StatusCode function_namespace_i4aas_inst_generated_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 241LU),
UA_NODEID_NUMERIC(ns[2], 239LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 241LU)
);
}

/* Keys - ns=2;i=242 */

static UA_StatusCode function_namespace_i4aas_inst_generated_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_242_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_242_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_242_variant_DataContents);
*variablenode_ns_2_i_242_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(no-local)[IRI]http://admin-shell.io/vdi/2770/1/0/DocumentId/Id");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_242_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 242LU),
UA_NODEID_NUMERIC(ns[2], 241LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_242_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 242LU)
);
}

/* Value - ns=2;i=245 */

static UA_StatusCode function_namespace_i4aas_inst_generated_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_245_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_245_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_245_variant_DataContents);
*variablenode_ns_2_i_245_variant_DataContents = UA_STRING_ALLOC("10000001");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_245_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 245LU),
UA_NODEID_NUMERIC(ns[2], 239LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_245_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 245LU)
);
}

/* Kind - ns=2;i=243 */

static UA_StatusCode function_namespace_i4aas_inst_generated_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_243_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_243_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_243_variant_DataContents);
*variablenode_ns_2_i_243_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_243_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 243LU),
UA_NODEID_NUMERIC(ns[2], 239LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_243_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 243LU)
);
}

/* Category - ns=2;i=240 */

static UA_StatusCode function_namespace_i4aas_inst_generated_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_240_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_240_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_240_variant_DataContents);
*variablenode_ns_2_i_240_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_240_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 240LU),
UA_NODEID_NUMERIC(ns[2], 239LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_240_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 240LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 240LU)
);
}

/* Kind - ns=2;i=237 */

static UA_StatusCode function_namespace_i4aas_inst_generated_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_237_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_237_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_237_variant_DataContents);
*variablenode_ns_2_i_237_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_237_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 237LU),
UA_NODEID_NUMERIC(ns[2], 233LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_237_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 237LU)
);
}

/* range - ns=2;i=335 */

static UA_StatusCode function_namespace_i4aas_inst_generated_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);

UA_STACKARRAY(UA_Range, variablenode_ns_2_i_335_Range_0, 1);
UA_init(variablenode_ns_2_i_335_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
variablenode_ns_2_i_335_Range_0->low = (UA_Double) 0;
variablenode_ns_2_i_335_Range_0->high = (UA_Double) 100;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_335_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
attr.displayName = UA_LOCALIZEDTEXT("", "range");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 335LU),
UA_NODEID_NUMERIC(ns[2], 237LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "range"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 335LU)
);
}

/* DataSpecification - ns=2;i=121 */

static UA_StatusCode function_namespace_i4aas_inst_generated_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 121LU),
UA_NODEID_NUMERIC(ns[2], 237LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DataSpecification"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 121LU), UA_NODEID_NUMERIC(ns[0], 47LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 111LU), false);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 121LU)
);
}

/* Keys - ns=2;i=122 */

static UA_StatusCode function_namespace_i4aas_inst_generated_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_122_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_122_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_122_variant_DataContents);
*variablenode_ns_2_i_122_variant_DataContents = UA_STRING_ALLOC("(Range)(local)[IdShort]temp01.range");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_122_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 122LU),
UA_NODEID_NUMERIC(ns[2], 121LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_122_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 122LU)
);
}

/* DocumentClassificationSystem - ns=2;i=253 */

static UA_StatusCode function_namespace_i4aas_inst_generated_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DocumentClassificationSystem");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 253LU),
UA_NODEID_NUMERIC(ns[2], 233LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DocumentClassificationSystem"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 253LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 328LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 253LU)
);
}

/* SemanticId - ns=2;i=255 */

static UA_StatusCode function_namespace_i4aas_inst_generated_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 255LU),
UA_NODEID_NUMERIC(ns[2], 253LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 255LU)
);
}

/* Keys - ns=2;i=256 */

static UA_StatusCode function_namespace_i4aas_inst_generated_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_256_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_256_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_256_variant_DataContents);
*variablenode_ns_2_i_256_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(no-local)[IRI]http://admin-shell.io/vdi/2770/1/0/DocumentClassification/ClassificationSystem");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_256_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 256LU),
UA_NODEID_NUMERIC(ns[2], 255LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_256_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 256LU)
);
}

/* ValueType - ns=2;i=258 */

static UA_StatusCode function_namespace_i4aas_inst_generated_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_258_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_258_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_258_variant_DataContents);
*variablenode_ns_2_i_258_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_258_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 258LU),
UA_NODEID_NUMERIC(ns[2], 253LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_258_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 258LU)
);
}

/* Category - ns=2;i=254 */

static UA_StatusCode function_namespace_i4aas_inst_generated_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_254_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_254_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_254_variant_DataContents);
*variablenode_ns_2_i_254_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_254_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 254LU),
UA_NODEID_NUMERIC(ns[2], 253LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_254_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 254LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 254LU)
);
}

/* Value - ns=2;i=259 */

static UA_StatusCode function_namespace_i4aas_inst_generated_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_259_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_259_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_259_variant_DataContents);
*variablenode_ns_2_i_259_variant_DataContents = UA_STRING_ALLOC("VDI2770:2018");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_259_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 259LU),
UA_NODEID_NUMERIC(ns[2], 253LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_259_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 259LU)
);
}

/* Kind - ns=2;i=257 */

static UA_StatusCode function_namespace_i4aas_inst_generated_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_257_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_257_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_257_variant_DataContents);
*variablenode_ns_2_i_257_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_257_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 257LU),
UA_NODEID_NUMERIC(ns[2], 253LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_257_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 257LU)
);
}

/* DocumentClassName - ns=2;i=246 */

static UA_StatusCode function_namespace_i4aas_inst_generated_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DocumentClassName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 246LU),
UA_NODEID_NUMERIC(ns[2], 233LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DocumentClassName"),
UA_NODEID_NUMERIC(ns[1], 1009LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 246LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 327LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 246LU)
);
}

/* Category - ns=2;i=247 */

static UA_StatusCode function_namespace_i4aas_inst_generated_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_247_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_247_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_247_variant_DataContents);
*variablenode_ns_2_i_247_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_247_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 247LU),
UA_NODEID_NUMERIC(ns[2], 246LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_247_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 247LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 247LU)
);
}

/* Kind - ns=2;i=250 */

static UA_StatusCode function_namespace_i4aas_inst_generated_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_250_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_250_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_250_variant_DataContents);
*variablenode_ns_2_i_250_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_250_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 250LU),
UA_NODEID_NUMERIC(ns[2], 246LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_250_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 250LU)
);
}

/* SemanticId - ns=2;i=248 */

static UA_StatusCode function_namespace_i4aas_inst_generated_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 248LU),
UA_NODEID_NUMERIC(ns[2], 246LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 248LU)
);
}

/* Keys - ns=2;i=249 */

static UA_StatusCode function_namespace_i4aas_inst_generated_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_249_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_249_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_249_variant_DataContents);
*variablenode_ns_2_i_249_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]http://admin-shell.io/vdi/2770/1/0/DocumentClassification/ClassName");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_249_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 249LU),
UA_NODEID_NUMERIC(ns[2], 248LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_249_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 249LU)
);
}

/* ValueType - ns=2;i=251 */

static UA_StatusCode function_namespace_i4aas_inst_generated_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_251_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_251_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_251_variant_DataContents);
*variablenode_ns_2_i_251_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_251_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 251LU),
UA_NODEID_NUMERIC(ns[2], 246LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_251_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 251LU)
);
}

/* Value - ns=2;i=252 */

static UA_StatusCode function_namespace_i4aas_inst_generated_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_252_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_252_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_252_variant_DataContents);
*variablenode_ns_2_i_252_variant_DataContents = UA_STRING_ALLOC("Operation");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_252_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 252LU),
UA_NODEID_NUMERIC(ns[2], 246LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_252_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 252LU)
);
}

/* Kind - ns=2;i=232 */

static UA_StatusCode function_namespace_i4aas_inst_generated_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_232_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_232_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_232_variant_DataContents);
*variablenode_ns_2_i_232_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_232_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 232LU),
UA_NODEID_NUMERIC(ns[2], 225LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_232_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 232LU)
);
}

/* SemanticId - ns=2;i=230 */

static UA_StatusCode function_namespace_i4aas_inst_generated_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 230LU),
UA_NODEID_NUMERIC(ns[2], 225LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 230LU)
);
}

/* Keys - ns=2;i=231 */

static UA_StatusCode function_namespace_i4aas_inst_generated_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_231_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_231_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_231_variant_DataContents);
*variablenode_ns_2_i_231_variant_DataContents = UA_STRING_ALLOC("(Submodel)(no-local)[IRI]http://i40.customer.com/type/1/1/1A7B62B529F19152");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_231_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 231LU),
UA_NODEID_NUMERIC(ns[2], 230LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_231_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 231LU)
);
}

/* Identification - ns=2;i=227 */

static UA_StatusCode function_namespace_i4aas_inst_generated_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 227LU),
UA_NODEID_NUMERIC(ns[2], 225LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 227LU)
);
}

/* Id - ns=2;i=229 */

static UA_StatusCode function_namespace_i4aas_inst_generated_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_229_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_229_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_229_variant_DataContents);
*variablenode_ns_2_i_229_variant_DataContents = UA_STRING_ALLOC("http://phi-ware.com/ids/sm/6161_7003_4012_2404");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_229_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 229LU),
UA_NODEID_NUMERIC(ns[2], 227LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_229_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 229LU)
);
}

/* IdType - ns=2;i=228 */

static UA_StatusCode function_namespace_i4aas_inst_generated_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_228_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_228_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_228_variant_DataContents);
*variablenode_ns_2_i_228_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_228_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 228LU),
UA_NODEID_NUMERIC(ns[2], 227LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_228_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 228LU)
);
}

/* Category - ns=2;i=226 */

static UA_StatusCode function_namespace_i4aas_inst_generated_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_226_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_226_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_226_variant_DataContents);
*variablenode_ns_2_i_226_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_226_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 226LU),
UA_NODEID_NUMERIC(ns[2], 225LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_226_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 226LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 226LU)
);
}

/* Administration - ns=2;i=166 */

static UA_StatusCode function_namespace_i4aas_inst_generated_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 166LU),
UA_NODEID_NUMERIC(ns[2], 162LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 166LU)
);
}

/* Revision - ns=2;i=168 */

static UA_StatusCode function_namespace_i4aas_inst_generated_239_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_168_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_168_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_168_variant_DataContents);
*variablenode_ns_2_i_168_variant_DataContents = UA_STRING_ALLOC("0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_168_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 168LU),
UA_NODEID_NUMERIC(ns[2], 166LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_168_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_239_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 168LU)
);
}

/* Version - ns=2;i=167 */

static UA_StatusCode function_namespace_i4aas_inst_generated_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_167_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_167_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_167_variant_DataContents);
*variablenode_ns_2_i_167_variant_DataContents = UA_STRING_ALLOC("1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_167_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 167LU),
UA_NODEID_NUMERIC(ns[2], 166LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_167_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 167LU)
);
}

/* Administration - ns=2;i=13 */

static UA_StatusCode function_namespace_i4aas_inst_generated_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 13LU),
UA_NODEID_NUMERIC(ns[1], 3001LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 13LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 13LU)
);
}

/* Version - ns=2;i=14 */

static UA_StatusCode function_namespace_i4aas_inst_generated_242_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_14_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_14_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_14_variant_DataContents);
*variablenode_ns_2_i_14_variant_DataContents = UA_STRING_ALLOC("1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_14_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 14LU),
UA_NODEID_NUMERIC(ns[2], 13LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_14_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 14LU)
);
}

/* Revision - ns=2;i=15 */

static UA_StatusCode function_namespace_i4aas_inst_generated_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_15_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_15_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_15_variant_DataContents);
*variablenode_ns_2_i_15_variant_DataContents = UA_STRING_ALLOC("0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_15_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15LU),
UA_NODEID_NUMERIC(ns[2], 13LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_15_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15LU)
);
}

/* Identification - ns=2;i=10 */

static UA_StatusCode function_namespace_i4aas_inst_generated_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 10LU),
UA_NODEID_NUMERIC(ns[1], 3001LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 10LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 10LU)
);
}

/* IdType - ns=2;i=11 */

static UA_StatusCode function_namespace_i4aas_inst_generated_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_11_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_11_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_11_variant_DataContents);
*variablenode_ns_2_i_11_variant_DataContents = UA_STRING_ALLOC("URI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_11_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 11LU),
UA_NODEID_NUMERIC(ns[2], 10LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_11_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 11LU)
);
}

/* Id - ns=2;i=12 */

static UA_StatusCode function_namespace_i4aas_inst_generated_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_12_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_12_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_12_variant_DataContents);
*variablenode_ns_2_i_12_variant_DataContents = UA_STRING_ALLOC("http://admin-shell.io/DataSpecificationTemplates/DataSpecificationIEC61360");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_12_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 12LU),
UA_NODEID_NUMERIC(ns[2], 10LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_12_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_i4aas_inst_generated_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 12LU)
);
}

static UA_DataTypeArray customUA_TYPES_I4AAS = {
    NULL,
    UA_TYPES_I4AAS_COUNT,
    UA_TYPES_I4AAS
};

static UA_DataTypeArray customUA_TYPES_I4AAS_INST = {
    NULL,
    UA_TYPES_I4AAS_INST_COUNT,
    UA_TYPES_I4AAS_INST
};

UA_StatusCode namespace_i4aas_inst_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[3];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/i4aas");
ns[2] = UA_Server_addNamespace(server, "http://admin-shell.io/samples/i4aas/instance");

/* Load custom datatype definitions into the server */
if(UA_TYPES_I4AAS_COUNT > 0) {
customUA_TYPES_I4AAS.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_I4AAS;

}
if(UA_TYPES_I4AAS_INST_COUNT > 0) {
customUA_TYPES_I4AAS_INST.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_I4AAS_INST;

}
if((retVal = function_namespace_i4aas_inst_generated_0_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_1_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_2_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_3_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_4_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_5_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_6_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_7_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_8_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_9_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_10_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_11_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_12_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_13_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_14_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_15_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_16_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_17_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_18_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_19_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_20_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_21_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_22_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_23_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_24_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_25_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_26_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_27_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_28_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_29_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_30_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_31_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_32_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_33_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_34_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_35_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_36_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_37_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_38_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_39_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_40_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_41_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_42_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_43_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_44_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_45_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_46_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_47_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_48_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_49_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_50_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_51_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_52_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_53_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_54_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_55_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_56_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_57_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_58_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_59_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_60_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_61_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_62_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_63_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_64_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_65_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_66_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_67_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_68_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_69_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_70_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_71_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_72_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_73_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_74_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_75_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_76_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_77_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_78_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_79_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_80_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_81_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_82_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_83_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_84_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_85_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_86_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_87_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_88_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_89_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_90_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_91_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_92_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_93_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_94_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_95_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_96_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_97_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_98_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_99_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_100_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_101_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_102_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_103_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_104_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_105_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_106_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_107_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_108_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_109_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_110_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_111_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_112_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_113_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_114_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_115_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_116_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_117_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_118_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_119_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_120_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_121_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_122_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_123_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_124_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_125_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_126_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_127_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_128_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_129_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_130_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_131_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_132_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_133_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_134_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_135_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_136_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_137_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_138_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_139_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_140_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_141_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_142_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_143_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_144_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_145_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_146_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_147_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_148_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_149_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_150_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_151_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_152_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_153_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_154_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_155_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_156_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_157_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_158_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_159_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_160_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_161_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_162_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_163_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_164_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_165_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_166_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_167_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_168_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_169_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_170_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_171_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_172_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_173_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_174_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_175_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_176_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_177_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_178_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_179_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_180_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_181_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_182_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_183_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_184_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_185_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_186_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_187_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_188_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_189_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_190_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_191_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_192_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_193_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_194_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_195_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_196_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_197_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_198_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_199_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_200_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_201_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_202_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_203_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_204_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_205_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_206_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_207_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_208_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_209_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_210_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_211_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_212_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_213_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_214_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_215_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_216_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_217_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_218_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_219_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_220_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_221_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_222_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_223_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_224_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_225_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_226_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_227_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_228_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_229_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_230_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_231_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_232_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_233_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_234_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_235_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_236_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_237_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_238_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_239_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_240_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_241_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_242_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_243_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_244_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_245_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_246_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_246_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_245_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_244_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_243_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_242_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_241_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_240_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_239_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_238_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_237_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_236_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_235_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_234_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_233_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_232_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_231_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_230_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_229_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_228_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_227_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_226_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_225_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_224_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_223_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_222_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_221_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_220_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_219_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_218_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_217_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_216_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_215_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_214_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_213_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_212_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_211_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_210_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_209_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_208_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_207_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_206_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_205_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_204_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_203_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_202_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_201_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_200_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_199_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_198_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_197_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_196_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_195_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_194_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_193_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_192_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_191_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_190_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_189_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_188_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_187_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_186_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_185_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_184_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_183_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_182_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_181_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_180_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_179_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_178_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_177_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_176_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_175_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_174_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_173_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_172_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_171_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_170_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_169_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_168_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_167_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_166_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_165_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_164_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_163_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_162_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_161_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_160_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_159_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_158_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_157_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_156_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_155_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_154_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_153_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_152_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_151_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_150_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_149_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_148_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_147_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_146_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_145_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_144_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_143_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_142_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_141_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_140_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_139_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_138_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_137_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_136_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_135_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_134_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_133_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_132_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_131_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_130_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_129_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_128_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_127_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_126_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_125_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_124_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_123_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_122_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_121_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_120_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_119_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_118_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_117_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_116_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_115_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_114_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_113_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_112_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_111_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_110_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_109_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_108_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_107_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_106_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_105_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_104_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_103_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_102_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_101_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_100_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_99_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_98_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_97_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_96_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_95_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_94_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_93_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_92_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_91_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_90_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_89_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_88_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_87_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_86_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_85_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_84_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_83_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_82_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_81_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_80_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_79_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_78_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_77_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_76_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_75_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_74_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_73_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_72_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_71_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_70_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_69_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_68_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_67_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_66_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_65_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_64_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_63_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_62_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_61_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_60_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_59_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_58_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_57_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_56_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_55_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_54_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_53_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_52_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_51_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_50_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_49_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_48_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_47_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_46_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_45_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_44_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_43_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_42_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_41_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_40_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_39_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_38_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_37_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_36_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_35_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_34_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_33_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_32_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_31_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_30_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_29_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_28_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_27_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_26_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_25_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_24_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_23_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_22_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_21_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_20_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_19_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_18_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_17_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_16_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_15_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_14_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_13_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_12_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_11_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_10_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_9_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_8_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_7_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_6_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_5_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_4_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_3_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_2_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_1_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace_i4aas_inst_generated_0_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}
