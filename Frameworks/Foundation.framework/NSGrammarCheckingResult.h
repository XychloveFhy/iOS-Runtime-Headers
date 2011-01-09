/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray;



@interface NSGrammarCheckingResult : NSTextCheckingResult 
{
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _range;
    NSArray *_details;
}


- (unsigned long long)resultType;
- (id)initWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 details:(id)arg2;
- (id)grammarDetails;
- (id)resultByAdjustingRangesWithOffset:(NSInteger)arg1;
- (BOOL)_adjustRangesWithOffset:(NSInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
