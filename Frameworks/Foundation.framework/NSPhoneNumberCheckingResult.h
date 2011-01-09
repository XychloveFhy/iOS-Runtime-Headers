/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;



@interface NSPhoneNumberCheckingResult : NSTextCheckingResult 
{
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _range;
    NSString *_phoneNumber;
    id _underlyingResult;
}

@property(readonly) void *underlyingResult;


- (unsigned long long)resultType;
- (id)initWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 phoneNumber:(id)arg2 underlyingResult:(void*)arg3;
- (id)initWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 phoneNumber:(id)arg2;
- (id)resultByAdjustingRangesWithOffset:(NSInteger)arg1;
- (BOOL)_adjustRangesWithOffset:(NSInteger)arg1;
- (void*)underlyingResult;
- (id)phoneNumber;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
