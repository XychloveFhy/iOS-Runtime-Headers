/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSError, NSString, GKBackgroundView;

@interface GKStatusSection : NSObject <GKTableSection> {
    BOOL _loading;
    NSString *_status;
    NSString *_info;
    NSError *_error;
    float _statusHeight;
    GKBackgroundView *_currentStatusView;
}

@property(getter=isLoading) BOOL loading;
@property(retain) NSString * status;
@property(retain) NSString * info;
@property(retain) NSError * error;
@property float statusHeight;
@property(retain) GKBackgroundView * currentStatusView;


- (id)init;
- (void)dealloc;
- (id)currentStatusView;
- (void)setStatusHeight:(float)arg1;
- (float)statusHeight;
- (void)setCurrentStatusView:(id)arg1;
- (id)makeStatusView;
- (id)sectionHeaderViewInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)sectionRowCountInTableView:(id)arg1;
- (float)sectionFooterHeightInTableView:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (id)error;
- (BOOL)isLoading;
- (id)info;
- (void)setInfo:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end