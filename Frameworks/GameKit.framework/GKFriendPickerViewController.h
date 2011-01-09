/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableDictionary, GKGameInviteMessageViewController, UITableView, <GKFriendPickerViewControllerDelegate>, UILabel, UIView, UISearchBar, GKUITheme, NSMutableArray, GKImageBackgroundView, NSArray;



@interface GKFriendPickerViewController : GKTableViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    <GKFriendPickerViewControllerDelegate> *_delegate;
    NSInteger _maxPlayers;
    NSInteger _numSelected;
    GKUITheme *_theme;
    UIView *_navView;
    UILabel *_navTitleLabel;
    UILabel *_navPlayersLabel;
    GKImageBackgroundView *_backgroundView;
    UITableView *_friendTable;
    UISearchBar *_searchBar;
    NSArray *_allFriends;
    NSMutableArray *_searchFriends;
    NSArray *_friends;
    NSMutableDictionary *_avatarImages;
    NSMutableDictionary *_ranks;
    GKGameInviteMessageViewController *_messageViewController;
    BOOL _lockedToPortrait;
}

@property(retain) GKUITheme *theme;
@property(getter=isLockedToPortrait) BOOL lockedToPortrait;
@property(retain) NSMutableDictionary *ranks;
@property(retain) NSMutableDictionary *avatarImages;
@property(retain) NSArray *pickableFriends;
@property NSInteger maxPlayers;
@property <GKFriendPickerViewControllerDelegate> *delegate;


- (void)setTheme:(id)arg1;
- (id)theme;
- (id)selectedPlayers;
- (void)showMessageViewController;
- (void)donePickingPlayersWithMessage:(id)arg1;
- (void)searchTableViewForText:(id)arg1;
- (void)gameInviteMessageViewController:(id)arg1 didFinishWithMessage:(id)arg2;
- (id)pickableFriends;
- (BOOL)isLockedToPortrait;
- (id)initWithTheme:(id)arg1;
- (void)selectFriends:(id)arg1;
- (void)setPickableFriends:(id)arg1;
- (void)updateNavViewLayoutForOrientation:(NSInteger)arg1;
- (void)setPlayerRangeText;
- (void)loadImageForCellAtIndexPath:(id)arg1;
- (id)ranks;
- (void)setRanks:(id)arg1;
- (id)avatarImages;
- (void)setAvatarImages:(id)arg1;
- (void)setLockedToPortrait:(BOOL)arg1;
- (NSInteger)maxPlayers;
- (void)setMaxPlayers:(NSInteger)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)done;
- (void)cancel;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
