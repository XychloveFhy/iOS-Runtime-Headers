/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription, NSArray, NSString, NSData, NSMutableDictionary;



@interface NSPropertyDescription : NSObject <NSCoding, NSCopying>
{
    NSString *_versionHashModifier;
    id _underlyingProperty;
    NSData *_versionHash;
    NSEntityDescription *_entity;
    NSString *_name;
    NSArray *_validationPredicates;
    NSArray *_validationWarnings;
    struct __propertyDescriptionFlags { 
        unsigned int _isReadOnly : 1; 
        unsigned int _isTransient : 1; 
        unsigned int _isOptional : 1; 
        unsigned int _isIndexed : 1; 
        unsigned int _skipValidation : 1; 
        unsigned int _isIndexedBySpotlight : 1; 
        unsigned int _isStoredInExternalRecord : 1; 
        unsigned int _extraIvarsAreInDataBlob : 1; 
        unsigned int _reservedPropertyDescription : 24; 
    } _propertyDescriptionFlags;
    void *_extraIvars;
    NSMutableDictionary *_userInfo;
    long _entitysReferenceIDForProperty;
}

+ (void)initialize;

- (void)setReadOnly:(BOOL)arg1;
- (BOOL)_isEditable;
- (void)setOptional:(BOOL)arg1;
- (void)setTransient:(BOOL)arg1;
- (void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2;
- (void)_initializeExtraIVars;
- (BOOL)isSpotlightIndexed;
- (void)setSpotlightIndexed:(BOOL)arg1;
- (BOOL)isStoredInTruthFile;
- (void)setStoredInTruthFile:(BOOL)arg1;
- (BOOL)isStoredInTruth;
- (void)setStoredInTruth:(BOOL)arg1;
- (void)setIndexedBySpotlight:(BOOL)arg1;
- (void)setStoredInExternalRecord:(BOOL)arg1;
- (BOOL)_isToManyRelationship;
- (void)_setEntity:(id)arg1;
- (BOOL)isIndexedBySpotlight;
- (BOOL)isStoredInExternalRecord;
- (void)_setEntitysReferenceID:(long)arg1;
- (id)versionHashModifier;
- (void)setVersionHashModifier:(id)arg1;
- (void)setRenamingIdentifier:(id)arg1;
- (void)setElementID:(id)arg1;
- (id)elementID;
- (void)_stripForMigration;
- (BOOL)_skipValidation;
- (void)_restoreValidation;
- (struct _NSExtraPropertyIVars { id x1; long long x2; long long x3; }*)_extraIVars;
- (void)setIndexed:(BOOL)arg1;
- (void)_throwIfNotEditable;
- (id)_initWithName:(id)arg1;
- (id)validationPredicates;
- (id)validationWarnings;
- (void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2;
- (void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(const id)arg6;
- (BOOL)isIndexed;
- (BOOL)_comparePredicatesAndWarnings:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (void)_versionHash:(char *)arg1;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(const id)arg6;
- (id)renamingIdentifier;
- (NSUInteger)_propertyType;
- (id)versionHash;
- (BOOL)isOptional;
- (BOOL)_isRelationship;
- (long)_entitysReferenceID;
- (id)entity;
- (BOOL)isReadOnly;
- (void)setUserInfo:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (BOOL)isTransient;

@end
