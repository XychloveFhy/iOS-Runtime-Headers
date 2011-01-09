/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NSMutableDictionary, Token;



@interface Cell : NSObject <InitFromPlistProtocol>
{
    NSInteger type;
    Token *content;
    Token *pre;
    Token *post;
    NSMutableDictionary *attributes;
}

@property(retain) NSString *content;
@property(retain) NSString *pre;
@property(retain) NSString *post;
@property(retain) NSMutableDictionary *attributes;
@property(readonly) NSInteger type;

+ (id)cellWithCell:(id)arg1;
+ (id)wildcard;
+ (id)blank;
+ (id)literalCellWithCell:(id)arg1;
+ (id)instanceFromPlist:(id)arg1;
+ (id)cell;
+ (id)cellWithContentString:(id)arg1;

- (void)setContent:(id)arg1;
- (BOOL)isBlank;
- (BOOL)matches:(id)arg1;
- (id)overlayedOn:(id)arg1;
- (id)initAsWildcard;
- (id)initAsBlank;
- (id)initWithContentString:(id)arg1;
- (void)setPre:(id)arg1;
- (void)setPost:(id)arg1;
- (id)flattened;
- (id)initWithAttributesDictionary:(id)arg1;
- (id)literalCell;
- (id)post;
- (id)pre;
- (id)initFromPlist:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (NSInteger)type;
- (BOOL)hasContent;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;

@end
