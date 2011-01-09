/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSMutableArray, NSMutableDictionary;



@interface SCROEvent : NSObject 
{
    NSInteger _handlerType;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_setDictionary;
    NSMutableDictionary *_getDictionary;
    NSMutableArray *_actions;
    BOOL _readOnly;
}

+ (id)brailleEvent;

- (NSInteger)handlerType;
- (void)requestRegisterCallbackForKey:(NSInteger)arg1;
- (void)requestValueForKey:(NSInteger)arg1;
- (void)requestPerformActionForKey:(NSInteger)arg1;
- (id)claimValueForKey:(NSInteger)arg1;
- (void)setMainDictionary:(id)arg1;
- (id)mainDictionary;
- (void)setClaimDictionary:(id)arg1;
- (id)claimDictionary;
- (void)performWithHandler:(id)arg1 trusted:(BOOL)arg2;
- (id)initForHandlerType:(NSInteger)arg1;
- (void)requestSetValue:(id)arg1 forKey:(NSInteger)arg2;
- (void)dealloc;

@end
