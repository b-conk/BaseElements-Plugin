/*
 BELinuxFunctionStrings.h
 BaseElements Plug-In

 Copyright 2019 Goya. All rights reserved.
 For conditions of distribution and use please see the copyright notice in BEPlugin.cpp

   http://www.goya.com.au/baseelements/plugin
 
 IMPORTANT: this file is automatically generated! Do not edit by hand.

 */


#if !defined(BELINUXFUNCTIONSTRINGS_H)
	#define BELINUXFUNCTIONSTRINGS_H

#include "BEPluginGlobalDefines.h"

#include <map>
#include <string>

const std::map<unsigned long, std::string> function_strings = {

	{ 1, "GyBE1nnYYnn" },
	{ 102, "BE_Version" },
	{ 103, "BE_VersionAutoUpdate" },
	{ 104, "BE_ClipboardFormats" },
	{ 105, "BE_ClipboardGetText ( format )" },
	{ 106, "BE_ClipboardSetText ( text ; format )" },
	{ 107, "BE_FolderCreate ( path )" },
	{ 108, "BE_FileDelete ( path )" },
	{ 109, "BE_FileExists ( path )" },
	{ 110, "BE_FileReadText ( pathOrContainer )" },
	{ 111, "BE_FileWriteText ( path ; text {; appendBoolean } )" },
	{ 112, "BE_FileSelectDialog ( prompt {; inFolderPath } )" },
	{ 113, "BE_FolderSelectDialog ( prompt {; inFolderPath } )" },
	{ 114, "BE_DialogDisplay ( title ; message ; defaultButton {; cancelButton ; alternateButton } )" },
	{ 115, "BE_XSLTApply ( xmlPath ; xsltText ; outputPath )" },
	{ 116, "BE_ExtractScriptVariables ( calculationText { ; variablePrefix } )" },
	{ 117, "BE_StripInvalidUTF16CharactersFromXMLFile ( path ; { resultPath } )" },
	{ 118, "BE_FileMove ( fromPath ; toPath )" },
	{ 119, "BE_FileCopy ( fromPath ; toPath )" },
	{ 121, "BE_FileListFolder ( path {; type ; includeSubdirBoolean ; useFullPathBoolean ; includeHiddenBoolean } )" },
	{ 124, "BE_OpenURL ( url )" },
	{ 125, "BE_FileOpen ( path )" },
	{ 126, "BE_FileSize ( path )" },
	{ 127, "BE_FileModificationTimestamp ( path )" },
	{ 128, "BaseElements" },
	{ 131, "GyBE1nnYYnn" },
	{ 132, "https://baseelementsplugin.zendesk.com/" },
	{ 135, "BE_ClipboardGetFile ( format {; fileName } )" },
	{ 136, "BE_ClipboardSetFile ( fileData ; format )" },
	{ 140, "BE_WriteTextFileToContainer_Deprecated ( filename ; text {; append} )" },
	{ 150, "BE_ScriptExecute ( scriptName {; fileName ; parameter } )" },
	{ 151, "BE_FileMakerSQL ( sqlStatement {; columnSeparator ; rowSeparator ; databaseName } )" },
	{ 152, "BE_HTTP_GET ( url {; filename ; username ; password } )" },
	{ 153, "BE_GetLastError" },
	{ 154, "BE_MessageDigest ( text {; algorithm ; encoding } )" },
	{ 155, "BE_GetLastDDLError" },
	{ 156, "BE_HTTP_GET_File ( url ; path {; username ; password } )" },
	{ 157, "BE_DialogProgress ( title ; description {; maximum } )" },
	{ 158, "BE_DialogProgressUpdate ( number {; description } )" },
	{ 159, "BE_Pause ( milliseconds )" },
	{ 160, "BE_PreferenceSet ( key ; value {; domain } )" },
	{ 161, "BE_PreferenceGet ( key {; domain } )" },
	{ 170, "BE_Unzip ( archivePath {; outputFolderPath } )" },
	{ 171, "BE_Zip ( fileList {; archiveFilePath } )" },
	{ 172, "BE_Base64_Decode_Deprecated ( text {; name } )" },
	{ 173, "BE_Base64_Encode_Deprecated ( data )" },
	{ 174, "BE_SetTextEncoding ( { encoding } )" },
	{ 175, "BE_Base64_URL_Encode_Deprecated ( data )" },
	{ 176, "BE_ExportFieldContents ( field {; outputPath } )" },
	{ 177, "BE_FileImport ( path {; compressBoolean } )" },
	{ 180, "BE_HTTP_POST ( url ; parameters {; username ; password ; filename } )" },
	{ 181, "BE_HTTP_ResponseCode" },
	{ 182, "BE_HTTP_ResponseHeaders ( { header } )" },
	{ 183, "BE_HTTP_SetCustomHeader ( { header ; value } )" },
	{ 184, "BE_HTTP_DELETE ( url {; username ; password } )" },
	{ 185, "BE_HTTP_PUTFile ( url ; path {; username ; password } )" },
	{ 186, "BE_HTTP_SetProxy ( proxy {; port ; username ; password } )" },
	{ 187, "BE_CurlSetOption ( { option ; value } )" },
	{ 188, "BE_HTTP_PUTData ( url ; data {; username ; password } )" },
	{ 189, "BE_FTP_Upload ( url ; data {; username ; password } )" },
	{ 190, "BE_CurlTrace" },
	{ 191, "BE_FTP_Delete ( url {; username ; password } )" },
	{ 192, "BE_HTTP_PATCH ( url ; parameters {; username ; password } )" },
	{ 200, "BE_XSLT_ApplyInMemory ( xmlText ; xsltText )" },
	{ 201, "BE_XPath ( xmlText ; xpathText {; namespaceListText ; asTextBoolean } )" },
	{ 202, "BE_XPathAll ( xmlText ; xpathText {; namespaceListText } )" },
	{ 210, "BE_XMLStripNodes ( inputPath ; outputPath ; nodeNames )" },
	{ 211, "BE_XMLParse ( pathOrXMLText )" },
	{ 212, "BE_SplitBEFileNodes ( path )" },
	{ 213, "BE_XMLValidate ( xml ; schema )" },
	{ 220, "BE_TimeCurrentMilliseconds" },
	{ 221, "BE_TimeUTCMilliseconds" },
	{ 222, "BE_TimeZoneOffset" },
	{ 230, "BE_FileSaveDialog ( prompt {; fileName ; inFolder } )" },
	{ 240, "BE_RegularExpression ( text ; expression {; options ; replaceString } )" },
	{ 250, "BE_ContainerIsCompressed ( containerField )" },
	{ 251, "BE_ContainerCompress ( data {; filename } )" },
	{ 252, "BE_ContainerUncompress ( gzip_data {; filename } )" },
	{ 260, "BE_Gzip ( data {; filename } )" },
	{ 261, "BE_UnGzip ( gzip_data {; filename } )" },
	{ 270, "BE_JPEG_Recompress_Deprecated ( jpeg {; compressionLevel ; width ; height } )" },
	{ 271, "BE_JPEGRecompress ( jpeg {; compressionLevel ; scale } )" },
	{ 300, "BE_JSONPath_Deprecated ( json ; path )" },
	{ 301, "BE_JSON_Error_Description_Deprecated" },
	{ 302, "BE_JSON_ArraySize_Deprecated ( json )" },
	{ 303, "BE_JSON_Encode_Deprecated ( key {; value ; type } )" },
	{ 321, "BE_OAuthRequestAccessToken ( url ; consumer_key ; consumer_secret ; request_key ; request_secret )" },
	{ 330, "BE_XeroSetTokens ( consumer_key ; private_key )" },
	{ 331, "BE_XeroGenerateKeys ( organisation {; organisationalUnit ; country ; state ; suburb ; domain ; emailAddress } )" },
	{ 350, "BE_ValuesUnique ( listOfValues {; caseSensitiveBoolean } )" },
	{ 351, "BE_ValuesFilterOut ( textToFilter ; filterValues {; caseSensitiveBoolean } )" },
	{ 352, "BE_ValuesContainsDuplicates ( listOfValues  {; caseSensitiveBoolean } )" },
	{ 353, "BE_ValuesSort ( listOfValues {; ascendingBoolean ; type } )" },
	{ 354, "BE_ValuesTimesDuplicated ( listOfValues ; numberOfTimes )" },
	{ 355, "BE_ValuesTrim ( listOfValues )" },
	{ 400, "BE_SMTPServer ( server { ; port ; username ; password } )" },
	{ 401, "BE_SMTPSend ( from ; to ; subject ; text { ; cc ; bcc ; replyTo ; html ; attachments } )" },
	{ 402, "BE_SMTPAddAttachment ( { attachment ; contentType } )" },
	{ 403, "BE_SMTPSetHeader ( { header ; value } )" },
	{ 500, "BE_Encrypt_AES_Deprecated ( key ; text )" },
	{ 501, "BE_Decrypt_AES_Deprecated ( key ; text )" },
	{ 502, "BE_SignatureGenerateRSA ( data ; privateKey {; privateKeyPassword ; algorithm; fileNameWithExtension } )" },
	{ 503, "BE_SignatureVerifyRSA ( data ; publicKey ; signature {; algorithm } )" },
	{ 504, "BE_CipherEncrypt ( cipher ; data ; key ; iv {; padding ; fileNameWithExtension } )" },
	{ 505, "BE_CipherDecrypt ( cipher ; encryptedData ; key ; iv {; padding ; fileNameWithExtension } )" },
	{ 550, "BE_HMAC_Deprecated ( text ; key {; algorithm ; outputEncoding ; inputEncoding } )" },
	{ 600, "BE_EvaluateJavaScript ( javaScript )" },
	{ 650, "BE_ArraySetFromValueList ( valueList {; retainEmptyBoolean } )" },
	{ 651, "BE_ArrayGetSize ( array )" },
	{ 652, "BE_ArrayGetValue ( array ; valueNumber )" },
	{ 653, "BE_ArrayDelete ( array )" },
	{ 654, "BE_ArrayFind ( array ; value )" },
	{ 655, "BE_ArrayChangeValue ( array ; valueNumber ; newValue )" },
	{ 700, "BE_ConvertContainer ( field {; type ; width ; height } )" },
	{ 750, "BE_PDFAppend ( pdfPathOrContainer ; appendPathOrContainer {; destinationPath } )" },
	{ 751, "BE_PDFPageCount ( pdfPathOrContainer )" },
	{ 752, "BE_PDFGetPages ( pdfPathOrContainer ; newPDFPath ; fromPageNum {; toPageNum } )" },
	{ 800, "BE_XOR ( text ; xorWith )" },
	{ 850, "BE_ScriptStepInstall ( name ; definitionXML ; id ; description ; calculation )" },
	{ 851, "BE_ScriptStepRemove ( scriptStepId )" },
	{ 852, "BE_ScriptStepPerform ( scriptStepId )" },
	{ 900, "BE_VectorDotProduct ( a ; b )" },
	{ 901, "BE_VectorEuclideanDistance ( a ; b )" },
	{ 950, "BE_GetMachineName" },
	{ 1001, "BE_OKButton" },
	{ 1002, "BE_CancelButton" },
	{ 1003, "BE_AlternateButton" },
	{ 1120, "BE_ExecuteSystemCommand ( command { ; timeout } )" },
	{ 2001, "BE_MessageDigestAlgorithm_MD5" },
	{ 2002, "BE_MessageDigestAlgorithm_SHA256" },
	{ 2004, "BE_MessageDigestAlgorithm_MDC2" },
	{ 2006, "BE_MessageDigestAlgorithm_SHA" },
	{ 2007, "BE_MessageDigestAlgorithm_SHA1" },
	{ 2008, "BE_MessageDigestAlgorithm_SHA224" },
	{ 2009, "BE_MessageDigestAlgorithm_SHA384" },
	{ 2010, "BE_MessageDigestAlgorithm_SHA512" },
	{ 3000, "BE_FileTypeAll" },
	{ 3001, "BE_FileTypeFile" },
	{ 3002, "BE_FileTypeFolder" },
	{ 4001, "BE_Encoding_Hex_Deprecated" },
	{ 4002, "BE_Encoding_Base64_Deprecated" },
	{ 65000, "Version: %@\n\nThis plug-in provides additional functionality for BaseElements from Goya." },

};

#endif // BELINUXFUNCTIONSTRINGS_H

