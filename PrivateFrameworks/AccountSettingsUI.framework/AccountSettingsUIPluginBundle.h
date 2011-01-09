/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class PSViewController, NSString, NSSet, <AccountSettingsUIPlugin>;



@interface AccountSettingsUIPluginBundle : NSObject 
{
    <AccountSettingsUIPlugin> *_plugin;
    NSString *_path;
    PSViewController *_parentController;
    NSSet *_accountTypes;
    NSInteger _commonSpecifierMode;
}

@property(readonly) <AccountSettingsUIPlugin> *plugin;
@property(readonly) NSInteger commonSpecifierMode;
@property(readonly) NSSet *accountTypes;
@property(readonly) NSString *path;


- (id)initWithPath:(id)arg1 parentController:(id)arg2 commonSpecifierMode:(NSInteger)arg3 accountTypes:(id)arg4;
- (id)plugin;
- (NSInteger)commonSpecifierMode;
- (id)accountTypes;
- (id)path;
- (void)dealloc;

@end
