/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSString, NSExpression, NSDictionary;



@interface NSPropertyMapping : NSObject 
{
    void *_reserved;
    void *_reserved1;
    NSArray *_propertyTransforms;
    NSString *_name;
    NSExpression *_valueExpression;
    NSDictionary *_userInfo;
    struct __propertyMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedPropertyMapping : 31; 
    } _propertyMappingFlags;
}

+ (void)initialize;

- (id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2;
- (id)initWithName:(id)arg1 valueExpression:(id)arg2;
- (id)_propertyTransforms;
- (id)valueExpression;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_throwIfNotEditable;
- (void)_createCachesAndOptimizeState;
- (void)setValueExpression:(id)arg1;
- (void)_setPropertyTransforms:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (BOOL)isEditable;
- (void)setName:(id)arg1;
- (id)name;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
