/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */



@interface AXAttributedString : NSString 
{
    struct __CFAttributedString { } *_string;
}

+ (id)axAttributedStringWithString:(id)arg1;

- (id)attributesAtIndex:(NSInteger)arg1 effectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2;
- (id)attributedSubstringFromRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setAttributes:(id)arg1;
- (BOOL)hasAttribute:(id)arg1;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (id)initWithString:(id)arg1;
- (id)string;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (NSUInteger)length;
- (void)dealloc;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)initWithCFAttributedString:(struct __CFAttributedString { }*)arg1;
- (void)replaceString:(struct __CFString { }*)arg1;
- (struct __CFAttributedString { }*)cfAttributedString;
- (void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)coalescedFontAttributes;
- (BOOL)isAXAttributedString;

@end
