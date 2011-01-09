/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;



@interface NSRegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_pattern;
    NSUInteger _options;
    void *_internal;
    id _reserved1;
    NSInteger _checkout;
    NSInteger _reserved2;
}

@property(readonly) NSString *pattern;
@property(readonly) NSUInteger options;
@property(readonly) NSUInteger numberOfCaptureGroups;

+ (id)regularExpressionWithPattern:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
+ (id)escapedPatternForString:(id)arg1;
+ (id)escapedTemplateForString:(id)arg1;
+ (void)initialize;

- (id)pattern;
- (id)matchesInString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (NSUInteger)numberOfMatchesInString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)firstMatchInString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)replacementStringForResult:(id)arg1 inString:(id)arg2 offset:(NSInteger)arg3 template:(id)arg4;
- (NSUInteger)numberOfCaptureGroups;
- (void)enumerateMatchesInString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3 usingBlock:(id)arg4;
- (id)initWithPattern:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfFirstMatchInString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)stringByReplacingMatchesInString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3 withTemplate:(id)arg4;
- (NSUInteger)replaceMatchesInString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3 withTemplate:(id)arg4;
- (NSUInteger)options;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
