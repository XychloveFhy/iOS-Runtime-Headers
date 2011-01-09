/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptObject, NSLock;



@interface SUScriptNativeObject : NSObject 
{
    NSLock *_lock;
    id _nativeObject;
    SUScriptObject *_scriptObject;
    BOOL _weak;
}

@property id object;
@property SUScriptObject *scriptObject;

+ (void)clearWeakReferencesToObject:(id)arg1;
+ (id)objectWithNativeObject:(id)arg1;

- (void)setObject:(id)arg1;
- (id)object;
- (void)lock;
- (void)unlock;
- (id)init;
- (void)dealloc;
- (void)setScriptObject:(id)arg1;
- (id)scriptObject;
- (void)destroyNativeObject;
- (void)setupNativeObject;

@end
