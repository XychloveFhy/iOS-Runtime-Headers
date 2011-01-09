/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUScriptViewController;



@interface SUScriptSection : SUScriptObject 
{
    NSString *_badgeValue;
    NSString *_identifier;
    BOOL _transient;
    SUScriptViewController *_viewController;
}

@property(getter=_badgeValue,retain) NSString *badgeValue; /* unknown property attribute: Sset_badgeValue: */
@property(getter=_identifier,retain) NSString *identifier; /* unknown property attribute: Sset_identifier: */
@property(getter=_transient) BOOL transient; /* unknown property attribute: Sset_transient: */
@property(getter=_viewController,retain) SUScriptViewController *viewController; /* unknown property attribute: Sset_viewController: */

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (void)dealloc;
- (void)set_badgeValue:(id)arg1;
- (void)set_transient:(BOOL)arg1;
- (id)_copyBadgeValue;
- (void)_setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;
- (BOOL)_transient;
- (id)_badgeValue;
- (id)initWithNativeSection:(id)arg1;
- (void)set_identifier:(id)arg1;
- (void)set_viewController:(id)arg1;
- (id)_copyViewController;
- (id)_viewController;
- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;
- (id)_identifier;
- (id)_className;

@end
