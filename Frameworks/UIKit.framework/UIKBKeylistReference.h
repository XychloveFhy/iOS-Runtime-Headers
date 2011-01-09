/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray;



@interface UIKBKeylistReference : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    id m_value;
    NSArray *m_nameElements;
    NSInteger m_startKeyIndex;
    NSInteger m_endKeyIndex;
    NSUInteger m_flags;
}

@property(readonly) NSString *keylistName;
@property(readonly) NSString *keyName;
@property(readonly) BOOL isKeysetReference;
@property(readonly) BOOL isKeylistReference;
@property(readonly) BOOL isKeysReference;
@property(readonly) BOOL isNamedKeyReference;
@property(readonly) BOOL isKeyIndexReference;
@property(readonly) BOOL isKeyIndexRangeReference;
@property(readonly) BOOL isGeometryReference;
@property(readonly) BOOL isAttributesReference;
@property(readonly) NSInteger endKeyIndex;
@property(readonly) NSInteger startKeyIndex;
@property(readonly) NSArray *nameElements;
@property(readonly) NSUInteger flags;
@property(retain) id value;
@property(retain) NSString *name;

+ (id)referenceWithName:(id)arg1 value:(id)arg2 flags:(NSUInteger)arg3;

- (id)initWithName:(id)arg1 value:(id)arg2 flags:(NSUInteger)arg3;
- (id)keylistName;
- (id)keyName;
- (BOOL)isKeysetReference;
- (BOOL)isKeylistReference;
- (BOOL)isKeysReference;
- (BOOL)isNamedKeyReference;
- (BOOL)isKeyIndexReference;
- (BOOL)isKeyIndexRangeReference;
- (BOOL)isGeometryReference;
- (BOOL)isAttributesReference;
- (NSUInteger)startIndexForListCount:(NSUInteger)arg1;
- (NSUInteger)endIndexForListCount:(NSUInteger)arg1;
- (void)setFlags:(NSUInteger)arg1 setStartKeyIndex:(NSInteger)arg2 setEndKeyIndex:(NSInteger)arg3;
- (void)setNameElements:(id)arg1;
- (NSInteger)endKeyIndex;
- (NSInteger)startKeyIndex;
- (id)nameElements;
- (id)value;
- (NSUInteger)flags;
- (void)setValue:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
