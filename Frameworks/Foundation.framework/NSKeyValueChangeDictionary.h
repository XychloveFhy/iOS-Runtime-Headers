/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject, NSIndexSet;



@interface NSKeyValueChangeDictionary : NSDictionary 
{
    NSInteger _retainCountMinusOne;
    struct { 
        NSUInteger kind; 
        NSObject *oldValue; 
        NSObject *newValue; 
        NSIndexSet *indexes; 
    } _details;
    NSObject *_originalObservable;
    BOOL _isPriorNotification;
    BOOL _isRetainingObjects;
}


- (void)setDetailsNoCopy:(struct { NSUInteger x1; id x2; id x3; id x4; })arg1 originalObservable:(id)arg2;
- (id)initWithDetailsNoCopy:(struct { NSUInteger x1; id x2; id x3; id x4; })arg1 originalObservable:(id)arg2 isPriorNotification:(BOOL)arg3;
- (void)retainObjects;
- (void)setOriginalObservable:(id)arg1;
- (id)keyEnumerator;
- (NSUInteger)retainCount;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (NSUInteger)count;
- (void)dealloc;

@end
