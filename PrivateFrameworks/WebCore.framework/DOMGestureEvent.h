/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMGestureEvent : DOMUIEvent 
{
}

@property(retain,readonly) <DOMEventTarget> *target;
@property(readonly) float scale;
@property(readonly) float rotation;
@property(readonly) BOOL ctrlKey;
@property(readonly) BOOL shiftKey;
@property(readonly) BOOL altKey;
@property(readonly) BOOL metaKey;


- (BOOL)altKey;
- (BOOL)ctrlKey;
- (BOOL)metaKey;
- (BOOL)shiftKey;
- (void)initGestureEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(NSInteger)arg5 screenX:(NSInteger)arg6 screenY:(NSInteger)arg7 clientX:(NSInteger)arg8 clientY:(NSInteger)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 target:(id)arg14 scale:(float)arg15 rotation:(float)arg16;
- (float)rotation;
- (float)scale;
- (id)target;

@end
