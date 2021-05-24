/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace0_generated.h"


/* HasDictionaryEntry - ns=0;i=17597 */

static UA_StatusCode function_namespace0_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "DictionaryEntryOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasDictionaryEntry");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 17597LU),
UA_NODEID_NUMERIC(ns[0], 32LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "HasDictionaryEntry"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17597LU)
);
}

/* HasAddIn - ns=0;i=17604 */

static UA_StatusCode function_namespace0_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "AddInOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasAddIn");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 17604LU),
UA_NODEID_NUMERIC(ns[0], 32LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "HasAddIn"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17604LU)
);
}

/* HasHistoricalConfiguration - ns=0;i=56 */

static UA_StatusCode function_namespace0_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "HistoricalConfigurationOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasHistoricalConfiguration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 56LU),
UA_NODEID_NUMERIC(ns[0], 44LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "HasHistoricalConfiguration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 56LU)
);
}

/* HasEffect - ns=0;i=54 */

static UA_StatusCode function_namespace0_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MayBeEffectedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "HasEffect");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 54LU),
UA_NODEID_NUMERIC(ns[0], 32LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "HasEffect"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 54LU)
);
}

/* HasCause - ns=0;i=53 */

static UA_StatusCode function_namespace0_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MayBeCausedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "HasCause");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 53LU),
UA_NODEID_NUMERIC(ns[0], 32LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "HasCause"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 53LU)
);
}

/* ToState - ns=0;i=52 */

static UA_StatusCode function_namespace0_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "FromTransition");
attr.displayName = UA_LOCALIZEDTEXT("", "ToState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 52LU),
UA_NODEID_NUMERIC(ns[0], 32LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ToState"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 52LU)
);
}

/* FromState - ns=0;i=51 */

static UA_StatusCode function_namespace0_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ToTransition");
attr.displayName = UA_LOCALIZEDTEXT("", "FromState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 51LU),
UA_NODEID_NUMERIC(ns[0], 32LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "FromState"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 51LU)
);
}

/* DiagnosticInfo - ns=0;i=25 */

static UA_StatusCode function_namespace0_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DiagnosticInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 25LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "DiagnosticInfo"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 25LU)
);
}

/* DataValue - ns=0;i=23 */

static UA_StatusCode function_namespace0_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 23LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "DataValue"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 23LU)
);
}

/* Structure - ns=0;i=22 */

static UA_StatusCode function_namespace0_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Structure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Structure"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 22LU)
);
}

/* SignedSoftwareCertificate - ns=0;i=344 */

static UA_StatusCode function_namespace0_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SignedSoftwareCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 344LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "SignedSoftwareCertificate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 344LU)
);
}

/* Range - ns=0;i=884 */

static UA_StatusCode function_namespace0_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Range");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 884LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Range"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 884LU)
);
}

/* EnumValueType - ns=0;i=7594 */

static UA_StatusCode function_namespace0_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValueType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 7594LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "EnumValueType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7594LU)
);
}

/* Union - ns=0;i=12756 */

static UA_StatusCode function_namespace0_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Union");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 12756LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Union"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 12756LU)
);
}

/* ServerStatusDataType - ns=0;i=862 */

static UA_StatusCode function_namespace0_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatusDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 862LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ServerStatusDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 862LU)
);
}

/* Argument - ns=0;i=296 */

static UA_StatusCode function_namespace0_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Argument");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 296LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Argument"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 296LU)
);
}

/* ServerDiagnosticsSummaryDataType - ns=0;i=859 */

static UA_StatusCode function_namespace0_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummaryDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 859LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummaryDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 859LU)
);
}

/* EUInformation - ns=0;i=887 */

static UA_StatusCode function_namespace0_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EUInformation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 887LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "EUInformation"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 887LU)
);
}

/* BuildInfo - ns=0;i=338 */

static UA_StatusCode function_namespace0_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 338LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "BuildInfo"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 338LU)
);
}

/* LocalizedText - ns=0;i=21 */

static UA_StatusCode function_namespace0_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LocalizedText");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 21LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "LocalizedText"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 21LU)
);
}

/* QualifiedName - ns=0;i=20 */

static UA_StatusCode function_namespace0_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "QualifiedName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 20LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "QualifiedName"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 20LU)
);
}

/* StatusCode - ns=0;i=19 */

static UA_StatusCode function_namespace0_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StatusCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 19LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "StatusCode"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 19LU)
);
}

/* ExpandedNodeId - ns=0;i=18 */

static UA_StatusCode function_namespace0_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExpandedNodeId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 18LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ExpandedNodeId"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 18LU)
);
}

/* NodeId - ns=0;i=17 */

static UA_StatusCode function_namespace0_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 17LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "NodeId"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17LU)
);
}

/* XmlElement - ns=0;i=16 */

static UA_StatusCode function_namespace0_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "XmlElement");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 16LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "XmlElement"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 16LU)
);
}

/* ByteString - ns=0;i=15 */

static UA_StatusCode function_namespace0_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ByteString");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 15LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ByteString"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 15LU)
);
}

/* Image - ns=0;i=30 */

static UA_StatusCode function_namespace0_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Image");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 30LU),
UA_NODEID_NUMERIC(ns[0], 15LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Image"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 30LU)
);
}

/* Guid - ns=0;i=14 */

static UA_StatusCode function_namespace0_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Guid");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 14LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Guid"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 14LU)
);
}

/* DateTime - ns=0;i=13 */

static UA_StatusCode function_namespace0_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DateTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 13LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "DateTime"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 13LU)
);
}

/* UtcTime - ns=0;i=294 */

static UA_StatusCode function_namespace0_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UtcTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 294LU),
UA_NODEID_NUMERIC(ns[0], 13LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "UtcTime"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 294LU)
);
}

/* String - ns=0;i=12 */

static UA_StatusCode function_namespace0_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "String");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 12LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "String"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 12LU)
);
}

/* LocaleId - ns=0;i=295 */

static UA_StatusCode function_namespace0_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 295LU),
UA_NODEID_NUMERIC(ns[0], 12LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "LocaleId"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 295LU)
);
}

/* Boolean - ns=0;i=1 */

static UA_StatusCode function_namespace0_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Boolean");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 1LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Boolean"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 1LU)
);
}

/* Enumeration - ns=0;i=29 */

static UA_StatusCode function_namespace0_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Enumeration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Enumeration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 29LU)
);
}

/* ServerState - ns=0;i=852 */

static UA_StatusCode function_namespace0_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 852LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ServerState"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 852LU)
);
}

/* AxisScaleEnumeration - ns=0;i=12077 */

static UA_StatusCode function_namespace0_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxisScaleEnumeration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 12077LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "AxisScaleEnumeration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 12077LU)
);
}

/* EnumStrings - ns=0;i=12078 */

static UA_StatusCode function_namespace0_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_0_i_12078_variant_DataContents[3];
variablenode_ns_0_i_12078_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "Linear");
variablenode_ns_0_i_12078_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "Log");
variablenode_ns_0_i_12078_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "Ln");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_12078_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 12078LU),
UA_NODEID_NUMERIC(ns[0], 12077LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 12078LU)
);
}

/* NamingRuleType - ns=0;i=120 */

static UA_StatusCode function_namespace0_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRuleType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 120LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "NamingRuleType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 120LU)
);
}

/* EnumValues - ns=0;i=12169 */

static UA_StatusCode function_namespace0_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7594LU);
UA_EnumValueType variablenode_ns_0_i_12169_variant_DataContents[3];

UA_init(&variablenode_ns_0_i_12169_variant_DataContents[0], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_0_i_12169_variant_DataContents[0].value = (UA_Int64) 1;
variablenode_ns_0_i_12169_variant_DataContents[0].displayName = UA_LOCALIZEDTEXT("", "Mandatory");
variablenode_ns_0_i_12169_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "The BrowseName must appear in all instances of the type.");

UA_init(&variablenode_ns_0_i_12169_variant_DataContents[1], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_0_i_12169_variant_DataContents[1].value = (UA_Int64) 2;
variablenode_ns_0_i_12169_variant_DataContents[1].displayName = UA_LOCALIZEDTEXT("", "Optional");
variablenode_ns_0_i_12169_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "The BrowseName may appear in an instance of the type.");

UA_init(&variablenode_ns_0_i_12169_variant_DataContents[2], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_0_i_12169_variant_DataContents[2].value = (UA_Int64) 3;
variablenode_ns_0_i_12169_variant_DataContents[2].displayName = UA_LOCALIZEDTEXT("", "Constraint");
variablenode_ns_0_i_12169_variant_DataContents[2].description = UA_LOCALIZEDTEXT("", "The modelling rule defines a constraint and the BrowseName is not used in an instance of the type.");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_12169_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValues");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 12169LU),
UA_NODEID_NUMERIC(ns[0], 120LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumValues"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);



return retVal;
}

static UA_StatusCode function_namespace0_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 12169LU)
);
}

/* RedundancySupport - ns=0;i=851 */

static UA_StatusCode function_namespace0_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 851LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 851LU)
);
}

/* EnumStrings - ns=0;i=7611 */

static UA_StatusCode function_namespace0_generated_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_0_i_7611_variant_DataContents[6];
variablenode_ns_0_i_7611_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "None");
variablenode_ns_0_i_7611_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "Cold");
variablenode_ns_0_i_7611_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "Warm");
variablenode_ns_0_i_7611_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "Hot");
variablenode_ns_0_i_7611_variant_DataContents[4] = UA_LOCALIZEDTEXT("", "Transparent");
variablenode_ns_0_i_7611_variant_DataContents[5] = UA_LOCALIZEDTEXT("", "HotAndMirrored");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_7611_variant_DataContents, (UA_Int32) 6, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7611LU),
UA_NODEID_NUMERIC(ns[0], 851LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7611LU)
);
}

/* Number - ns=0;i=26 */

static UA_StatusCode function_namespace0_generated_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 26LU),
UA_NODEID_NUMERIC(ns[0], 24LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 26LU)
);
}

/* UInteger - ns=0;i=28 */

static UA_StatusCode function_namespace0_generated_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "UInteger");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 28LU),
UA_NODEID_NUMERIC(ns[0], 26LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "UInteger"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 28LU)
);
}

/* Byte - ns=0;i=3 */

static UA_StatusCode function_namespace0_generated_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Byte");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 3LU),
UA_NODEID_NUMERIC(ns[0], 28LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Byte"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3LU)
);
}

/* UInt32 - ns=0;i=7 */

static UA_StatusCode function_namespace0_generated_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt32");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 7LU),
UA_NODEID_NUMERIC(ns[0], 28LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "UInt32"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7LU)
);
}

/* UInt64 - ns=0;i=9 */

static UA_StatusCode function_namespace0_generated_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt64");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 9LU),
UA_NODEID_NUMERIC(ns[0], 28LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "UInt64"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 9LU)
);
}

/* UInt16 - ns=0;i=5 */

static UA_StatusCode function_namespace0_generated_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt16");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 5LU),
UA_NODEID_NUMERIC(ns[0], 28LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "UInt16"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 5LU)
);
}

/* Decimal - ns=0;i=50 */

static UA_StatusCode function_namespace0_generated_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Decimal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 50LU),
UA_NODEID_NUMERIC(ns[0], 26LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Decimal"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 50LU)
);
}

/* Float - ns=0;i=10 */

static UA_StatusCode function_namespace0_generated_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Float");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 10LU),
UA_NODEID_NUMERIC(ns[0], 26LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Float"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 10LU)
);
}

/* Double - ns=0;i=11 */

static UA_StatusCode function_namespace0_generated_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Double");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 11LU),
UA_NODEID_NUMERIC(ns[0], 26LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Double"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11LU)
);
}

/* Duration - ns=0;i=290 */

static UA_StatusCode function_namespace0_generated_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Duration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 290LU),
UA_NODEID_NUMERIC(ns[0], 11LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Duration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 290LU)
);
}

/* Integer - ns=0;i=27 */

static UA_StatusCode function_namespace0_generated_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Integer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 27LU),
UA_NODEID_NUMERIC(ns[0], 26LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Integer"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 27LU)
);
}

/* Int16 - ns=0;i=4 */

static UA_StatusCode function_namespace0_generated_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int16");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 4LU),
UA_NODEID_NUMERIC(ns[0], 27LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Int16"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 4LU)
);
}

/* SByte - ns=0;i=2 */

static UA_StatusCode function_namespace0_generated_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SByte");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 2LU),
UA_NODEID_NUMERIC(ns[0], 27LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "SByte"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2LU)
);
}

/* Int64 - ns=0;i=8 */

static UA_StatusCode function_namespace0_generated_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int64");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 8LU),
UA_NODEID_NUMERIC(ns[0], 27LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Int64"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 8LU)
);
}

/* Int32 - ns=0;i=6 */

static UA_StatusCode function_namespace0_generated_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int32");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 6LU),
UA_NODEID_NUMERIC(ns[0], 27LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "Int32"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 6LU)
);
}

/* DataItemType - ns=0;i=2365 */

static UA_StatusCode function_namespace0_generated_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataItemType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A variable that contains live automation data.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2365LU),
UA_NODEID_NUMERIC(ns[0], 63LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "DataItemType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2365LU)
);
}

/* DiscreteItemType - ns=0;i=2372 */

static UA_StatusCode function_namespace0_generated_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.isAbstract = true;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DiscreteItemType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2372LU),
UA_NODEID_NUMERIC(ns[0], 2365LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "DiscreteItemType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2372LU)
);
}

/* MultiStateValueDiscreteType - ns=0;i=11238 */

static UA_StatusCode function_namespace0_generated_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MultiStateValueDiscreteType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 11238LU),
UA_NODEID_NUMERIC(ns[0], 2372LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "MultiStateValueDiscreteType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11238LU)
);
}

/* EnumValues - ns=0;i=11241 */

static UA_StatusCode function_namespace0_generated_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7594LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValues");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11241LU),
UA_NODEID_NUMERIC(ns[0], 11238LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumValues"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11241LU)
);
}

/* ValueAsText - ns=0;i=11461 */

static UA_StatusCode function_namespace0_generated_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueAsText");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11461LU),
UA_NODEID_NUMERIC(ns[0], 11238LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValueAsText"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11461LU)
);
}

/* TwoStateDiscreteType - ns=0;i=2373 */

static UA_StatusCode function_namespace0_generated_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TwoStateDiscreteType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2373LU),
UA_NODEID_NUMERIC(ns[0], 2372LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "TwoStateDiscreteType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2373LU)
);
}

/* FalseState - ns=0;i=2374 */

static UA_StatusCode function_namespace0_generated_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "FalseState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2374LU),
UA_NODEID_NUMERIC(ns[0], 2373LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "FalseState"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2374LU)
);
}

/* TrueState - ns=0;i=2375 */

static UA_StatusCode function_namespace0_generated_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TrueState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2375LU),
UA_NODEID_NUMERIC(ns[0], 2373LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TrueState"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2375LU)
);
}

/* MultiStateDiscreteType - ns=0;i=2376 */

static UA_StatusCode function_namespace0_generated_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 28LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MultiStateDiscreteType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2376LU),
UA_NODEID_NUMERIC(ns[0], 2372LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "MultiStateDiscreteType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2376LU)
);
}

/* EnumStrings - ns=0;i=2377 */

static UA_StatusCode function_namespace0_generated_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2377LU),
UA_NODEID_NUMERIC(ns[0], 2376LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2377LU)
);
}

/* AnalogItemType - ns=0;i=2368 */

static UA_StatusCode function_namespace0_generated_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AnalogItemType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2368LU),
UA_NODEID_NUMERIC(ns[0], 2365LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "AnalogItemType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2368LU)
);
}

/* EngineeringUnits - ns=0;i=2371 */

static UA_StatusCode function_namespace0_generated_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2371LU),
UA_NODEID_NUMERIC(ns[0], 2368LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2371LU)
);
}

/* InstrumentRange - ns=0;i=2370 */

static UA_StatusCode function_namespace0_generated_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "InstrumentRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2370LU),
UA_NODEID_NUMERIC(ns[0], 2368LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InstrumentRange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2370LU)
);
}

/* EURange - ns=0;i=2369 */

static UA_StatusCode function_namespace0_generated_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2369LU),
UA_NODEID_NUMERIC(ns[0], 2368LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2369LU)
);
}

/* Definition - ns=0;i=2366 */

static UA_StatusCode function_namespace0_generated_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Definition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A vendor-specific, human readable string that specifies how the value of this DataItem is calculated.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2366LU),
UA_NODEID_NUMERIC(ns[0], 2365LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Definition"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2366LU)
);
}

/* ValuePrecision - ns=0;i=2367 */

static UA_StatusCode function_namespace0_generated_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ValuePrecision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum precision that the server can maintain for the item based on restrictions in the target environment.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2367LU),
UA_NODEID_NUMERIC(ns[0], 2365LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ValuePrecision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2367LU)
);
}

/* DictionaryFolderType - ns=0;i=17591 */

static UA_StatusCode function_namespace0_generated_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DictionaryFolderType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 17591LU),
UA_NODEID_NUMERIC(ns[0], 61LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "DictionaryFolderType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17591LU)
);
}

/* <DictionaryFolderName> - ns=0;i=17592 */

static UA_StatusCode function_namespace0_generated_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<DictionaryFolderName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 17592LU),
UA_NODEID_NUMERIC(ns[0], 17591LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "<DictionaryFolderName>"),
UA_NODEID_NUMERIC(ns[0], 17591LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17592LU)
);
}

/* FileType - ns=0;i=11575 */

static UA_StatusCode function_namespace0_generated_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FileType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "FileType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11575LU)
);
}

/* Size - ns=0;i=11576 */

static UA_StatusCode function_namespace0_generated_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Size");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11576LU),
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Size"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11576LU)
);
}

/* GetPosition - ns=0;i=11590 */

static UA_StatusCode function_namespace0_generated_76_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetPosition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 11590LU),
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "GetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_76_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11590LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=11592 */

static UA_StatusCode function_namespace0_generated_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11592_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_11592_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11592_variant_DataContents[0].name = UA_STRING("Position");
variablenode_ns_0_i_11592_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
variablenode_ns_0_i_11592_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11592_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11592LU),
UA_NODEID_NUMERIC(ns[0], 11590LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace0_generated_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11592LU)
);
}

/* InputArguments - ns=0;i=11591 */

static UA_StatusCode function_namespace0_generated_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11591_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_11591_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11591_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_0_i_11591_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11591_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11591_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11591LU),
UA_NODEID_NUMERIC(ns[0], 11590LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace0_generated_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11591LU)
);
}

/* Writable - ns=0;i=12686 */

static UA_StatusCode function_namespace0_generated_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Writable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 12686LU),
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Writable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 12686LU)
);
}

/* SetPosition - ns=0;i=11593 */

static UA_StatusCode function_namespace0_generated_80_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetPosition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 11593LU),
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_80_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11593LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=11594 */

static UA_StatusCode function_namespace0_generated_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11594_variant_DataContents[2];

UA_init(&variablenode_ns_0_i_11594_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11594_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_0_i_11594_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11594_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_11594_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11594_variant_DataContents[1].name = UA_STRING("Position");
variablenode_ns_0_i_11594_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
variablenode_ns_0_i_11594_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11594_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11594LU),
UA_NODEID_NUMERIC(ns[0], 11593LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace0_generated_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11594LU)
);
}

/* UserWritable - ns=0;i=12687 */

static UA_StatusCode function_namespace0_generated_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UserWritable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 12687LU),
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "UserWritable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 12687LU)
);
}

/* OpenCount - ns=0;i=11579 */

static UA_StatusCode function_namespace0_generated_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "OpenCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11579LU),
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OpenCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11579LU)
);
}

/* Close - ns=0;i=11583 */

static UA_StatusCode function_namespace0_generated_84_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Close");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 11583LU),
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Close"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_84_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11583LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=11584 */

static UA_StatusCode function_namespace0_generated_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11584_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_11584_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11584_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_0_i_11584_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11584_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11584_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11584LU),
UA_NODEID_NUMERIC(ns[0], 11583LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace0_generated_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11584LU)
);
}

/* Write - ns=0;i=11588 */

static UA_StatusCode function_namespace0_generated_86_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Write");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 11588LU),
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Write"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_86_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11588LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=11589 */

static UA_StatusCode function_namespace0_generated_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11589_variant_DataContents[2];

UA_init(&variablenode_ns_0_i_11589_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11589_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_0_i_11589_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11589_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_11589_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11589_variant_DataContents[1].name = UA_STRING("Data");
variablenode_ns_0_i_11589_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_0_i_11589_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11589_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11589LU),
UA_NODEID_NUMERIC(ns[0], 11588LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace0_generated_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11589LU)
);
}

/* Open - ns=0;i=11580 */

static UA_StatusCode function_namespace0_generated_88_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Open");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 11580LU),
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Open"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_88_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11580LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=11582 */

static UA_StatusCode function_namespace0_generated_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11582_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_11582_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11582_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_0_i_11582_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11582_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11582_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11582LU),
UA_NODEID_NUMERIC(ns[0], 11580LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace0_generated_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11582LU)
);
}

/* InputArguments - ns=0;i=11581 */

static UA_StatusCode function_namespace0_generated_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11581_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_11581_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11581_variant_DataContents[0].name = UA_STRING("Mode");
variablenode_ns_0_i_11581_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
variablenode_ns_0_i_11581_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11581_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11581LU),
UA_NODEID_NUMERIC(ns[0], 11580LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace0_generated_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11581LU)
);
}

/* Read - ns=0;i=11585 */

static UA_StatusCode function_namespace0_generated_91_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Read");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 11585LU),
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Read"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_91_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11585LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=11586 */

static UA_StatusCode function_namespace0_generated_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11586_variant_DataContents[2];

UA_init(&variablenode_ns_0_i_11586_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11586_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_0_i_11586_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11586_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_11586_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11586_variant_DataContents[1].name = UA_STRING("Length");
variablenode_ns_0_i_11586_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_0_i_11586_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11586_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11586LU),
UA_NODEID_NUMERIC(ns[0], 11585LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace0_generated_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11586LU)
);
}

/* OutputArguments - ns=0;i=11587 */

static UA_StatusCode function_namespace0_generated_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11587_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_11587_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11587_variant_DataContents[0].name = UA_STRING("Data");
variablenode_ns_0_i_11587_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_0_i_11587_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11587_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11587LU),
UA_NODEID_NUMERIC(ns[0], 11585LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace0_generated_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11587LU)
);
}

/* MimeType - ns=0;i=13341 */

static UA_StatusCode function_namespace0_generated_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 13341LU),
UA_NODEID_NUMERIC(ns[0], 11575LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MimeType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 13341LU)
);
}

/* DictionaryEntryType - ns=0;i=17589 */

static UA_StatusCode function_namespace0_generated_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "DictionaryEntryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 17589LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "DictionaryEntryType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17589LU)
);
}

/* IrdiDictionaryEntryType - ns=0;i=17598 */

static UA_StatusCode function_namespace0_generated_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IrdiDictionaryEntryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 17598LU),
UA_NODEID_NUMERIC(ns[0], 17589LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "IrdiDictionaryEntryType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17598LU)
);
}

/* <DictionaryEntryName> - ns=0;i=17590 */

static UA_StatusCode function_namespace0_generated_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<DictionaryEntryName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 17590LU),
UA_NODEID_NUMERIC(ns[0], 17589LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "<DictionaryEntryName>"),
UA_NODEID_NUMERIC(ns[0], 17589LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17590LU)
);
}

/* UriDictionaryEntryType - ns=0;i=17600 */

static UA_StatusCode function_namespace0_generated_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UriDictionaryEntryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 17600LU),
UA_NODEID_NUMERIC(ns[0], 17589LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "UriDictionaryEntryType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17600LU)
);
}

/* <DictionaryEntryName> - ns=0;i=17593 */

static UA_StatusCode function_namespace0_generated_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<DictionaryEntryName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 17593LU),
UA_NODEID_NUMERIC(ns[0], 17591LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "<DictionaryEntryName>"),
UA_NODEID_NUMERIC(ns[0], 17589LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17593LU)
);
}

/* InterfaceTypes - ns=0;i=17708 */

static UA_StatusCode function_namespace0_generated_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InterfaceTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 17708LU),
UA_NODEID_NUMERIC(ns[0], 86LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[0], "InterfaceTypes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17708LU)
);
}

/* BaseInterfaceType - ns=0;i=17602 */

static UA_StatusCode function_namespace0_generated_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "BaseInterfaceType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 17602LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "BaseInterfaceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 17602LU), UA_NODEID_NUMERIC(ns[0], 35LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17708LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17602LU)
);
}

/* ServerDiagnosticsSummaryType - ns=0;i=2150 */

static UA_StatusCode function_namespace0_generated_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 859LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummaryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 63LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummaryType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2150LU)
);
}

/* SessionAbortCount - ns=0;i=2157 */

static UA_StatusCode function_namespace0_generated_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionAbortCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2157LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SessionAbortCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2157LU)
);
}

/* CurrentSessionCount - ns=0;i=2152 */

static UA_StatusCode function_namespace0_generated_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2152LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2152LU)
);
}

/* SessionTimeoutCount - ns=0;i=2156 */

static UA_StatusCode function_namespace0_generated_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionTimeoutCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2156LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SessionTimeoutCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2156LU)
);
}

/* CurrentSubscriptionCount - ns=0;i=2160 */

static UA_StatusCode function_namespace0_generated_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2160LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2160LU)
);
}

/* SecurityRejectedRequestsCount - ns=0;i=2162 */

static UA_StatusCode function_namespace0_generated_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedRequestsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2162LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2162LU)
);
}

/* SecurityRejectedSessionCount - ns=0;i=2154 */

static UA_StatusCode function_namespace0_generated_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2154LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2154LU)
);
}

/* RejectedRequestsCount - ns=0;i=2163 */

static UA_StatusCode function_namespace0_generated_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedRequestsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2163LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2163LU)
);
}

/* CumulatedSessionCount - ns=0;i=2153 */

static UA_StatusCode function_namespace0_generated_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2153LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CumulatedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2153LU)
);
}

/* CumulatedSubscriptionCount - ns=0;i=2161 */

static UA_StatusCode function_namespace0_generated_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2161LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CumulatedSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2161LU)
);
}

/* RejectedSessionCount - ns=0;i=2155 */

static UA_StatusCode function_namespace0_generated_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2155LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2155LU)
);
}

/* PublishingIntervalCount - ns=0;i=2159 */

static UA_StatusCode function_namespace0_generated_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingIntervalCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2159LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "PublishingIntervalCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2159LU)
);
}

/* ServerViewCount - ns=0;i=2151 */

static UA_StatusCode function_namespace0_generated_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerViewCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2151LU),
UA_NODEID_NUMERIC(ns[0], 2150LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ServerViewCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2151LU)
);
}

/* BuildInfoType - ns=0;i=3051 */

static UA_StatusCode function_namespace0_generated_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 338LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfoType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 3051LU),
UA_NODEID_NUMERIC(ns[0], 63LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "BuildInfoType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3051LU)
);
}

/* ServerStatusType - ns=0;i=2138 */

static UA_StatusCode function_namespace0_generated_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 862LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatusType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2138LU),
UA_NODEID_NUMERIC(ns[0], 63LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ServerStatusType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2138LU)
);
}

/* OperationLimitsType - ns=0;i=11564 */

static UA_StatusCode function_namespace0_generated_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimitsType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 11564LU),
UA_NODEID_NUMERIC(ns[0], 61LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "OperationLimitsType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11564LU)
);
}

/* MaxNodesPerRead - ns=0;i=11565 */

static UA_StatusCode function_namespace0_generated_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRead");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11565LU),
UA_NODEID_NUMERIC(ns[0], 11564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRead"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11565LU)
);
}

/* MaxNodesPerBrowse - ns=0;i=11570 */

static UA_StatusCode function_namespace0_generated_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerBrowse");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11570LU),
UA_NODEID_NUMERIC(ns[0], 11564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerBrowse"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11570LU)
);
}

/* MaxNodesPerRegisterNodes - ns=0;i=11571 */

static UA_StatusCode function_namespace0_generated_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRegisterNodes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11571LU),
UA_NODEID_NUMERIC(ns[0], 11564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRegisterNodes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11571LU)
);
}

/* MaxNodesPerWrite - ns=0;i=11567 */

static UA_StatusCode function_namespace0_generated_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerWrite");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11567LU),
UA_NODEID_NUMERIC(ns[0], 11564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerWrite"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11567LU)
);
}

/* MaxNodesPerMethodCall - ns=0;i=11569 */

static UA_StatusCode function_namespace0_generated_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerMethodCall");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11569LU),
UA_NODEID_NUMERIC(ns[0], 11564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerMethodCall"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11569LU)
);
}

/* MaxNodesPerTranslateBrowsePathsToNodeIds - ns=0;i=11572 */

static UA_StatusCode function_namespace0_generated_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerTranslateBrowsePathsToNodeIds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11572LU),
UA_NODEID_NUMERIC(ns[0], 11564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerTranslateBrowsePathsToNodeIds"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11572LU)
);
}

/* MaxMonitoredItemsPerCall - ns=0;i=11574 */

static UA_StatusCode function_namespace0_generated_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxMonitoredItemsPerCall");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11574LU),
UA_NODEID_NUMERIC(ns[0], 11564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxMonitoredItemsPerCall"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11574LU)
);
}

/* MaxNodesPerNodeManagement - ns=0;i=11573 */

static UA_StatusCode function_namespace0_generated_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerNodeManagement");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11573LU),
UA_NODEID_NUMERIC(ns[0], 11564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerNodeManagement"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11573LU)
);
}

/* ServerRedundancyType - ns=0;i=2034 */

static UA_StatusCode function_namespace0_generated_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerRedundancyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2034LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ServerRedundancyType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2034LU)
);
}

/* RedundancySupport - ns=0;i=2035 */

static UA_StatusCode function_namespace0_generated_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 851LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2035LU),
UA_NODEID_NUMERIC(ns[0], 2034LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2035LU)
);
}

/* VendorServerInfoType - ns=0;i=2033 */

static UA_StatusCode function_namespace0_generated_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VendorServerInfoType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2033LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "VendorServerInfoType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2033LU)
);
}

/* ServerDiagnosticsType - ns=0;i=2020 */

static UA_StatusCode function_namespace0_generated_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2020LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2020LU)
);
}

/* ServerCapabilitiesType - ns=0;i=2013 */

static UA_StatusCode function_namespace0_generated_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerCapabilitiesType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2013LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ServerCapabilitiesType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2013LU)
);
}

/* OperationLimits - ns=0;i=11551 */

static UA_StatusCode function_namespace0_generated_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11551LU),
UA_NODEID_NUMERIC(ns[0], 2013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "OperationLimits"),
UA_NODEID_NUMERIC(ns[0], 11564LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11551LU)
);
}

/* ServerType - ns=0;i=2004 */

static UA_StatusCode function_namespace0_generated_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2004LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ServerType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2004LU)
);
}

/* Server - ns=0;i=2253 */

static UA_StatusCode function_namespace0_generated_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Server");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2253LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[0], "Server"),
UA_NODEID_NUMERIC(ns[0], 2004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2253LU)
);
}

/* GetMonitoredItems - ns=0;i=11492 */

static UA_StatusCode function_namespace0_generated_134_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetMonitoredItems");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 11492LU),
UA_NODEID_NUMERIC(ns[0], 2253LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "GetMonitoredItems"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_134_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11492LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=11494 */

static UA_StatusCode function_namespace0_generated_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11494_variant_DataContents[2];

UA_init(&variablenode_ns_0_i_11494_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11494_variant_DataContents[0].name = UA_STRING("ServerHandles");
variablenode_ns_0_i_11494_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11494_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11494_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_0_i_11494_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_0_i_11494_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_0_i_11494_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_0_i_11494_variant_DataContents[0].arrayDimensions = variablenode_ns_0_i_11494_variant_DataContents0_arrayDimensions;

UA_init(&variablenode_ns_0_i_11494_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11494_variant_DataContents[1].name = UA_STRING("ClientHandles");
variablenode_ns_0_i_11494_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11494_variant_DataContents[1].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11494_variant_DataContents1_arrayDimensions, 1);
UA_init(variablenode_ns_0_i_11494_variant_DataContents1_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_0_i_11494_variant_DataContents1_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_0_i_11494_variant_DataContents[1].arrayDimensionsSize = 1;
variablenode_ns_0_i_11494_variant_DataContents[1].arrayDimensions = variablenode_ns_0_i_11494_variant_DataContents1_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11494_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11494LU),
UA_NODEID_NUMERIC(ns[0], 11492LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace0_generated_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11494LU)
);
}

/* InputArguments - ns=0;i=11493 */

static UA_StatusCode function_namespace0_generated_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11493_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_11493_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11493_variant_DataContents[0].name = UA_STRING("SubscriptionId");
variablenode_ns_0_i_11493_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11493_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11493_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11493LU),
UA_NODEID_NUMERIC(ns[0], 11492LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace0_generated_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11493LU)
);
}

/* ServerRedundancy - ns=0;i=2296 */

static UA_StatusCode function_namespace0_generated_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerRedundancy");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2296LU),
UA_NODEID_NUMERIC(ns[0], 2253LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ServerRedundancy"),
UA_NODEID_NUMERIC(ns[0], 2034LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2296LU)
);
}

/* RedundancySupport - ns=0;i=3709 */

static UA_StatusCode function_namespace0_generated_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 851LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3709LU),
UA_NODEID_NUMERIC(ns[0], 2296LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3709LU)
);
}

/* ServerArray - ns=0;i=2254 */

static UA_StatusCode function_namespace0_generated_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2254LU),
UA_NODEID_NUMERIC(ns[0], 2253LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ServerArray"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2254LU)
);
}

/* VendorServerInfo - ns=0;i=2295 */

static UA_StatusCode function_namespace0_generated_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VendorServerInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2295LU),
UA_NODEID_NUMERIC(ns[0], 2253LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "VendorServerInfo"),
UA_NODEID_NUMERIC(ns[0], 2033LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2295LU)
);
}

/* ServiceLevel - ns=0;i=2267 */

static UA_StatusCode function_namespace0_generated_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServiceLevel");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2267LU),
UA_NODEID_NUMERIC(ns[0], 2253LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ServiceLevel"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2267LU)
);
}

/* ServerCapabilities - ns=0;i=2268 */

static UA_StatusCode function_namespace0_generated_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerCapabilities");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 2253LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ServerCapabilities"),
UA_NODEID_NUMERIC(ns[0], 2013LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2268LU)
);
}

/* OperationLimits - ns=0;i=11704 */

static UA_StatusCode function_namespace0_generated_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11704LU),
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "OperationLimits"),
UA_NODEID_NUMERIC(ns[0], 11564LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11704LU)
);
}

/* MaxNodesPerNodeManagement - ns=0;i=11713 */

static UA_StatusCode function_namespace0_generated_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerNodeManagement");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11713LU),
UA_NODEID_NUMERIC(ns[0], 11704LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerNodeManagement"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11713LU)
);
}

/* MaxNodesPerRead - ns=0;i=11705 */

static UA_StatusCode function_namespace0_generated_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRead");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11705LU),
UA_NODEID_NUMERIC(ns[0], 11704LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRead"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11705LU)
);
}

/* MaxNodesPerWrite - ns=0;i=11707 */

static UA_StatusCode function_namespace0_generated_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerWrite");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11707LU),
UA_NODEID_NUMERIC(ns[0], 11704LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerWrite"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11707LU)
);
}

/* MaxNodesPerBrowse - ns=0;i=11710 */

static UA_StatusCode function_namespace0_generated_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerBrowse");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11710LU),
UA_NODEID_NUMERIC(ns[0], 11704LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerBrowse"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11710LU)
);
}

/* MaxNodesPerRegisterNodes - ns=0;i=11711 */

static UA_StatusCode function_namespace0_generated_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRegisterNodes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11711LU),
UA_NODEID_NUMERIC(ns[0], 11704LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRegisterNodes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11711LU)
);
}

/* MaxNodesPerTranslateBrowsePathsToNodeIds - ns=0;i=11712 */

static UA_StatusCode function_namespace0_generated_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerTranslateBrowsePathsToNodeIds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11712LU),
UA_NODEID_NUMERIC(ns[0], 11704LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerTranslateBrowsePathsToNodeIds"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11712LU)
);
}

/* MaxMonitoredItemsPerCall - ns=0;i=11714 */

static UA_StatusCode function_namespace0_generated_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxMonitoredItemsPerCall");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11714LU),
UA_NODEID_NUMERIC(ns[0], 11704LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxMonitoredItemsPerCall"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11714LU)
);
}

/* MaxNodesPerMethodCall - ns=0;i=11709 */

static UA_StatusCode function_namespace0_generated_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerMethodCall");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11709LU),
UA_NODEID_NUMERIC(ns[0], 11704LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerMethodCall"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11709LU)
);
}

/* MaxQueryContinuationPoints - ns=0;i=2736 */

static UA_StatusCode function_namespace0_generated_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxQueryContinuationPoints");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2736LU),
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxQueryContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2736LU)
);
}

/* LocaleIdArray - ns=0;i=2271 */

static UA_StatusCode function_namespace0_generated_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleIdArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2271LU),
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "LocaleIdArray"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2271LU)
);
}

/* MaxHistoryContinuationPoints - ns=0;i=2737 */

static UA_StatusCode function_namespace0_generated_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxHistoryContinuationPoints");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2737LU),
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxHistoryContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2737LU)
);
}

/* ModellingRules - ns=0;i=2996 */

static UA_StatusCode function_namespace0_generated_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ModellingRules");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2996LU),
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ModellingRules"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2996LU)
);
}

/* MinSupportedSampleRate - ns=0;i=2272 */

static UA_StatusCode function_namespace0_generated_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MinSupportedSampleRate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2272LU),
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MinSupportedSampleRate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2272LU)
);
}

/* MaxBrowseContinuationPoints - ns=0;i=2735 */

static UA_StatusCode function_namespace0_generated_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxBrowseContinuationPoints");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2735LU),
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxBrowseContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2735LU)
);
}

/* AggregateFunctions - ns=0;i=2997 */

static UA_StatusCode function_namespace0_generated_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AggregateFunctions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2997LU),
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AggregateFunctions"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2997LU)
);
}

/* SoftwareCertificates - ns=0;i=3704 */

static UA_StatusCode function_namespace0_generated_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 344LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareCertificates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3704LU),
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "SoftwareCertificates"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3704LU)
);
}

/* ServerProfileArray - ns=0;i=2269 */

static UA_StatusCode function_namespace0_generated_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerProfileArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2269LU),
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ServerProfileArray"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2269LU)
);
}

/* NamespaceArray - ns=0;i=2255 */

static UA_StatusCode function_namespace0_generated_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2255LU),
UA_NODEID_NUMERIC(ns[0], 2253LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceArray"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2255LU)
);
}

/* Auditing - ns=0;i=2994 */

static UA_StatusCode function_namespace0_generated_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Auditing");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2994LU),
UA_NODEID_NUMERIC(ns[0], 2253LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Auditing"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2994LU)
);
}

/* ServerStatus - ns=0;i=2256 */

static UA_StatusCode function_namespace0_generated_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 862LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatus");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2256LU),
UA_NODEID_NUMERIC(ns[0], 2253LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ServerStatus"),
UA_NODEID_NUMERIC(ns[0], 2138LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2256LU)
);
}

/* State - ns=0;i=2259 */

static UA_StatusCode function_namespace0_generated_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 852LU);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2259LU),
UA_NODEID_NUMERIC(ns[0], 2256LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "State"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2259LU)
);
}

/* ShutdownReason - ns=0;i=2993 */

static UA_StatusCode function_namespace0_generated_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ShutdownReason");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2993LU),
UA_NODEID_NUMERIC(ns[0], 2256LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ShutdownReason"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2993LU)
);
}

/* CurrentTime - ns=0;i=2258 */

static UA_StatusCode function_namespace0_generated_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2258LU),
UA_NODEID_NUMERIC(ns[0], 2256LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentTime"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2258LU)
);
}

/* StartTime - ns=0;i=2257 */

static UA_StatusCode function_namespace0_generated_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2257LU),
UA_NODEID_NUMERIC(ns[0], 2256LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "StartTime"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2257LU)
);
}

/* BuildInfo - ns=0;i=2260 */

static UA_StatusCode function_namespace0_generated_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 338LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2260LU),
UA_NODEID_NUMERIC(ns[0], 2256LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "BuildInfo"),
UA_NODEID_NUMERIC(ns[0], 3051LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2260LU)
);
}

/* BuildNumber - ns=0;i=2265 */

static UA_StatusCode function_namespace0_generated_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2265LU),
UA_NODEID_NUMERIC(ns[0], 2260LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "BuildNumber"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2265LU)
);
}

/* ProductName - ns=0;i=2261 */

static UA_StatusCode function_namespace0_generated_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2261LU),
UA_NODEID_NUMERIC(ns[0], 2260LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ProductName"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2261LU)
);
}

/* ManufacturerName - ns=0;i=2263 */

static UA_StatusCode function_namespace0_generated_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2263LU),
UA_NODEID_NUMERIC(ns[0], 2260LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ManufacturerName"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2263LU)
);
}

/* BuildDate - ns=0;i=2266 */

static UA_StatusCode function_namespace0_generated_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2266LU),
UA_NODEID_NUMERIC(ns[0], 2260LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "BuildDate"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2266LU)
);
}

/* ProductUri - ns=0;i=2262 */

static UA_StatusCode function_namespace0_generated_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2262LU),
UA_NODEID_NUMERIC(ns[0], 2260LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ProductUri"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2262LU)
);
}

/* SoftwareVersion - ns=0;i=2264 */

static UA_StatusCode function_namespace0_generated_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2264LU),
UA_NODEID_NUMERIC(ns[0], 2260LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SoftwareVersion"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2264LU)
);
}

/* SecondsTillShutdown - ns=0;i=2992 */

static UA_StatusCode function_namespace0_generated_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecondsTillShutdown");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2992LU),
UA_NODEID_NUMERIC(ns[0], 2256LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SecondsTillShutdown"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2992LU)
);
}

/* ServerDiagnostics - ns=0;i=2274 */

static UA_StatusCode function_namespace0_generated_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnostics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2274LU),
UA_NODEID_NUMERIC(ns[0], 2253LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnostics"),
UA_NODEID_NUMERIC(ns[0], 2020LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2274LU)
);
}

/* ServerDiagnosticsSummary - ns=0;i=2275 */

static UA_StatusCode function_namespace0_generated_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 859LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 2274LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummary"),
UA_NODEID_NUMERIC(ns[0], 2150LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2275LU)
);
}

/* SessionTimeoutCount - ns=0;i=2281 */

static UA_StatusCode function_namespace0_generated_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionTimeoutCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2281LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SessionTimeoutCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2281LU)
);
}

/* CurrentSessionCount - ns=0;i=2277 */

static UA_StatusCode function_namespace0_generated_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2277LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2277LU)
);
}

/* SecurityRejectedSessionCount - ns=0;i=2279 */

static UA_StatusCode function_namespace0_generated_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2279LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2279LU)
);
}

/* RejectedRequestsCount - ns=0;i=2288 */

static UA_StatusCode function_namespace0_generated_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedRequestsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2288LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2288LU)
);
}

/* SessionAbortCount - ns=0;i=2282 */

static UA_StatusCode function_namespace0_generated_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionAbortCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2282LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SessionAbortCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2282LU)
);
}

/* PublishingIntervalCount - ns=0;i=2284 */

static UA_StatusCode function_namespace0_generated_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingIntervalCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2284LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "PublishingIntervalCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2284LU)
);
}

/* SecurityRejectedRequestsCount - ns=0;i=2287 */

static UA_StatusCode function_namespace0_generated_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedRequestsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2287LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2287LU)
);
}

/* ServerViewCount - ns=0;i=2276 */

static UA_StatusCode function_namespace0_generated_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerViewCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2276LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ServerViewCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2276LU)
);
}

/* RejectedSessionCount - ns=0;i=3705 */

static UA_StatusCode function_namespace0_generated_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3705LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3705LU)
);
}

/* CumulatedSubscriptionCount - ns=0;i=2286 */

static UA_StatusCode function_namespace0_generated_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2286LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CumulatedSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2286LU)
);
}

/* CumulatedSessionCount - ns=0;i=2278 */

static UA_StatusCode function_namespace0_generated_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2278LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CumulatedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2278LU)
);
}

/* CurrentSubscriptionCount - ns=0;i=2285 */

static UA_StatusCode function_namespace0_generated_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2285LU),
UA_NODEID_NUMERIC(ns[0], 2275LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2285LU)
);
}

/* EnabledFlag - ns=0;i=2294 */

static UA_StatusCode function_namespace0_generated_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EnabledFlag");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2294LU),
UA_NODEID_NUMERIC(ns[0], 2274LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnabledFlag"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2294LU)
);
}

/* VendorServerInfo - ns=0;i=2011 */

static UA_StatusCode function_namespace0_generated_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VendorServerInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2011LU),
UA_NODEID_NUMERIC(ns[0], 2004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "VendorServerInfo"),
UA_NODEID_NUMERIC(ns[0], 2033LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2011LU)
);
}

/* ModellingRuleType - ns=0;i=77 */

static UA_StatusCode function_namespace0_generated_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ModellingRuleType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 77LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "ModellingRuleType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 77LU)
);
}

/* MandatoryPlaceholder - ns=0;i=11510 */

static UA_StatusCode function_namespace0_generated_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MandatoryPlaceholder");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11510LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "MandatoryPlaceholder"),
UA_NODEID_NUMERIC(ns[0], 77LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11510LU)
);
}

/* NamingRule - ns=0;i=11511 */

static UA_StatusCode function_namespace0_generated_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120LU);
UA_Int32 *variablenode_ns_0_i_11511_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_0_i_11511_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_0_i_11511_variant_DataContents);
*variablenode_ns_0_i_11511_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11511_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11511LU),
UA_NODEID_NUMERIC(ns[0], 11510LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamingRule"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_11511_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11511LU)
);
}

/* Optional - ns=0;i=80 */

static UA_StatusCode function_namespace0_generated_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Optional");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 80LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Optional"),
UA_NODEID_NUMERIC(ns[0], 77LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11571LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11551LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11574LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11565LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11572LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11569LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11570LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2371LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2370LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2367LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 13341LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11573LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2366LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11567LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 80LU)
);
}

/* NamingRule - ns=0;i=113 */

static UA_StatusCode function_namespace0_generated_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120LU);
UA_Int32 *variablenode_ns_0_i_113_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_0_i_113_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_0_i_113_variant_DataContents);
*variablenode_ns_0_i_113_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_113_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 113LU),
UA_NODEID_NUMERIC(ns[0], 80LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamingRule"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_113_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 113LU)
);
}

/* NamingRule - ns=0;i=111 */

static UA_StatusCode function_namespace0_generated_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120LU);
UA_Int32 *variablenode_ns_0_i_111_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_0_i_111_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_0_i_111_variant_DataContents);
*variablenode_ns_0_i_111_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_111_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 111LU),
UA_NODEID_NUMERIC(ns[0], 77LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamingRule"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_111_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 111LU)
);
}

/* Mandatory - ns=0;i=78 */

static UA_StatusCode function_namespace0_generated_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Mandatory");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 78LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Mandatory"),
UA_NODEID_NUMERIC(ns[0], 77LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11588LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11589LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11461LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11591LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11576LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12687LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11586LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2162LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11594LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2011LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11585LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7611LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11582LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11584LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2369LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2152LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11580LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2156LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2155LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2157LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11241LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11581LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11579LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2151LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11592LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2154LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 111LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12169LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2375LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11583LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2035LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11587LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2377LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11590LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11593LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12078LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2153LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2161LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2159LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12686LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2374LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2163LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2160LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 78LU)
);
}

/* NamingRule - ns=0;i=112 */

static UA_StatusCode function_namespace0_generated_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120LU);
UA_Int32 *variablenode_ns_0_i_112_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_0_i_112_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_0_i_112_variant_DataContents);
*variablenode_ns_0_i_112_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_112_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 112LU),
UA_NODEID_NUMERIC(ns[0], 78LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamingRule"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_112_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 112LU)
);
}

/* OptionalPlaceholder - ns=0;i=11508 */

static UA_StatusCode function_namespace0_generated_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OptionalPlaceholder");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11508LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "OptionalPlaceholder"),
UA_NODEID_NUMERIC(ns[0], 77LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17593LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17590LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17592LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11508LU)
);
}

/* NamingRule - ns=0;i=11509 */

static UA_StatusCode function_namespace0_generated_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120LU);
UA_Int32 *variablenode_ns_0_i_11509_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_0_i_11509_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_0_i_11509_variant_DataContents);
*variablenode_ns_0_i_11509_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11509_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11509LU),
UA_NODEID_NUMERIC(ns[0], 11508LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamingRule"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_11509_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11509LU)
);
}

/* DataTypeEncodingType - ns=0;i=76 */

static UA_StatusCode function_namespace0_generated_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeEncodingType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 76LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "DataTypeEncodingType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 76LU)
);
}

/* Default JSON - ns=0;i=15375 */

static UA_StatusCode function_namespace0_generated_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 15375LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default JSON"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 15375LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 884LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 15375LU)
);
}

/* Default Binary - ns=0;i=298 */

static UA_StatusCode function_namespace0_generated_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 298LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 298LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 296LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 298LU)
);
}

/* Default JSON - ns=0;i=15376 */

static UA_StatusCode function_namespace0_generated_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 15376LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default JSON"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 15376LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 887LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 15376LU)
);
}

/* Default Binary - ns=0;i=8251 */

static UA_StatusCode function_namespace0_generated_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 8251LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 8251LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7594LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 8251LU)
);
}

/* DataTypeSystemType - ns=0;i=75 */

static UA_StatusCode function_namespace0_generated_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeSystemType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 75LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "DataTypeSystemType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 75LU)
);
}

/* OPC Binary - ns=0;i=93 */

static UA_StatusCode function_namespace0_generated_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OPC Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 93LU),
UA_NODEID_NUMERIC(ns[0], 90LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[0], "OPC Binary"),
UA_NODEID_NUMERIC(ns[0], 75LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 93LU)
);
}

/* XML Schema - ns=0;i=92 */

static UA_StatusCode function_namespace0_generated_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "XML Schema");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 92LU),
UA_NODEID_NUMERIC(ns[0], 90LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[0], "XML Schema"),
UA_NODEID_NUMERIC(ns[0], 75LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 92LU)
);
}

/* DataTypeDictionaryType - ns=0;i=72 */

static UA_StatusCode function_namespace0_generated_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeDictionaryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 72LU),
UA_NODEID_NUMERIC(ns[0], 63LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "DataTypeDictionaryType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 72LU)
);
}

/* DataTypeVersion - ns=0;i=106 */

static UA_StatusCode function_namespace0_generated_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 106LU),
UA_NODEID_NUMERIC(ns[0], 72LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DataTypeVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 106LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 106LU)
);
}

/* NamespaceUri - ns=0;i=107 */

static UA_StatusCode function_namespace0_generated_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A URI that uniquely identifies the dictionary.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 107LU),
UA_NODEID_NUMERIC(ns[0], 72LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 107LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 107LU)
);
}

/* Opc.Ua - ns=0;i=7617 */

static UA_StatusCode function_namespace0_generated_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
UA_ByteString *variablenode_ns_0_i_7617_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_0_i_7617_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_0_i_7617_variant_DataContents);
*variablenode_ns_0_i_7617_variant_DataContents = UA_BYTESTRING_NULL;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7617_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7617LU),
UA_NODEID_NUMERIC(ns[0], 93LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Opc.Ua"),
UA_NODEID_NUMERIC(ns[0], 72LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_0_i_7617_variant_DataContents->data = NULL;
variablenode_ns_0_i_7617_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_0_i_7617_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7617LU)
);
}

/* DataTypeDescriptionType - ns=0;i=69 */

static UA_StatusCode function_namespace0_generated_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeDescriptionType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 69LU),
UA_NODEID_NUMERIC(ns[0], 63LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[0], "DataTypeDescriptionType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 69LU)
);
}

/* Argument - ns=0;i=7650 */

static UA_StatusCode function_namespace0_generated_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_0_i_7650_variant_DataContents =  UA_String_new();
if (!variablenode_ns_0_i_7650_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_0_i_7650_variant_DataContents);
*variablenode_ns_0_i_7650_variant_DataContents = UA_STRING_ALLOC("Argument");
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7650_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Argument");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7650LU),
UA_NODEID_NUMERIC(ns[0], 7617LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Argument"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_0_i_7650_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7650LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 298LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7650LU)
);
}

/* EnumValueType - ns=0;i=7656 */

static UA_StatusCode function_namespace0_generated_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_0_i_7656_variant_DataContents =  UA_String_new();
if (!variablenode_ns_0_i_7656_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_0_i_7656_variant_DataContents);
*variablenode_ns_0_i_7656_variant_DataContents = UA_STRING_ALLOC("EnumValueType");
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7656_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValueType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7656LU),
UA_NODEID_NUMERIC(ns[0], 7617LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "EnumValueType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_0_i_7656_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7656LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8251LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7656LU)
);
}

/* DataTypeVersion - ns=0;i=104 */

static UA_StatusCode function_namespace0_generated_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 104LU),
UA_NODEID_NUMERIC(ns[0], 69LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DataTypeVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 104LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 104LU)
);
}

/* DictionaryFragment - ns=0;i=105 */

static UA_StatusCode function_namespace0_generated_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DictionaryFragment");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 105LU),
UA_NODEID_NUMERIC(ns[0], 69LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DictionaryFragment"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 105LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 105LU)
);
}

/* Default XML - ns=0;i=3063 */

static UA_StatusCode function_namespace0_generated_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 3063LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3063LU)
);
}

/* Default Binary - ns=0;i=3062 */

static UA_StatusCode function_namespace0_generated_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 3062LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3062LU)
);
}

UA_StatusCode namespace0_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[1];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");

/* Load custom datatype definitions into the server */
if((retVal = function_namespace0_generated_0_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_0_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_1_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_1_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_2_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_2_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_3_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_3_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_4_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_4_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_5_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_5_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_6_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_6_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_7_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_8_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_9_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_10_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_11_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_12_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_13_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_14_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_15_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_16_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_17_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_18_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_19_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_20_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_21_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_22_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_23_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_24_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_25_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_26_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_27_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_28_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_29_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_30_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_31_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_32_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_33_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_34_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_35_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_36_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_37_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_38_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_39_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_40_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_41_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_42_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_43_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_44_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_45_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_46_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_47_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_48_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_49_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_50_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_51_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_52_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_53_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_54_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_55_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_56_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_57_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_58_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_59_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_60_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_61_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_62_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_63_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_64_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_65_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_66_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_67_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_68_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_69_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_70_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_71_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_72_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_73_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_74_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_75_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_76_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_77_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_78_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_79_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_80_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_81_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_82_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_83_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_84_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_85_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_86_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_87_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_88_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_89_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_90_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_91_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_92_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_93_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_94_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_95_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_96_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_97_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_98_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_99_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_100_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_101_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_102_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_103_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_104_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_105_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_106_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_107_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_108_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_109_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_110_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_111_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_112_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_113_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_114_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_115_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_116_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_117_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_118_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_119_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_120_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_121_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_122_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_123_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_124_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_125_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_126_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_127_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_128_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_129_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_130_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_131_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_132_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_133_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_134_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_135_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_136_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_137_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_138_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_139_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_140_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_141_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_142_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_143_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_144_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_145_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_146_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_147_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_148_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_149_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_150_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_151_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_152_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_153_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_154_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_155_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_156_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_157_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_158_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_159_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_160_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_161_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_162_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_163_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_164_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_165_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_166_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_167_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_168_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_169_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_170_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_171_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_172_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_173_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_174_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_175_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_176_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_177_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_178_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_179_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_180_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_181_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_182_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_183_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_184_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_185_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_186_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_187_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_188_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_189_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_190_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_191_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_192_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_193_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_194_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_195_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_196_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_197_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_198_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_199_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_200_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_201_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_202_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_203_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_204_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_205_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_206_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_207_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_208_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_209_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_210_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_211_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_212_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_213_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_214_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_215_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_216_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_217_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_218_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_219_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_220_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_220_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_219_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_218_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_217_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_216_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_215_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_214_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_213_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_212_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_211_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_210_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_209_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_208_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_207_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_206_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_205_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_204_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_203_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_202_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_201_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_200_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_199_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_198_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_197_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_196_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_195_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_194_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_193_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_192_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_191_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_190_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_189_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_188_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_187_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_186_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_185_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_184_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_183_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_182_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_181_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_180_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_179_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_178_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_177_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_176_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_175_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_174_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_173_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_172_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_171_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_170_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_169_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_168_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_167_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_166_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_165_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_164_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_163_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_162_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_161_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_160_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_159_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_158_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_157_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_156_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_155_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_154_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_153_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_152_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_151_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_150_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_149_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_148_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_147_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_146_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_145_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_144_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_143_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_142_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_141_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_140_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_139_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_138_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_137_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_136_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_135_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_134_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_133_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_132_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_131_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_130_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_129_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_128_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_127_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_126_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_125_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_124_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_123_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_122_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_121_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_120_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_119_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_118_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_117_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_116_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_115_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_114_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_113_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_112_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_111_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_110_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_109_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_108_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_107_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_106_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_105_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_104_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_103_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_102_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_101_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_100_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_99_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_98_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_97_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_96_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_95_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_94_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_93_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_92_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_91_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_90_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_89_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_88_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_87_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_86_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_85_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_84_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_83_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_82_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_81_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_80_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_79_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_78_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_77_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_76_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_75_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_74_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_73_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_72_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_71_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_70_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_69_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_68_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_67_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_66_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_65_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_64_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_63_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_62_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_61_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_60_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_59_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_58_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_57_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_56_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_55_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_54_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_53_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_52_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_51_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_50_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_49_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_48_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_47_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_46_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_45_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_44_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_43_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_42_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_41_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_40_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_39_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_38_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_37_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_36_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_35_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_34_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_33_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_32_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_31_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_30_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_29_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_28_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_27_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_26_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_25_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_24_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_23_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_22_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_21_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_20_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_19_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_18_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_17_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_16_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_15_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_14_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_13_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_12_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_11_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_10_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_9_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_8_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_namespace0_generated_7_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}
