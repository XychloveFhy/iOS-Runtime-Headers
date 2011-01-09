/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString, ISReview;



@interface SUScriptReview : SUScriptObject 
{
    ISReview *_review;
    NSNumber *_adamID;
    NSString *_body;
    id _hasSavedDraft;
    NSString *_infoURL;
    NSString *_itemType;
    NSNumber *_rating;
    NSNumber *_nickname;
    id _nicknameIsConfirmed;
    NSString *_title;
}

@property(getter=_adamID,retain,readonly) NSNumber *adamID;
@property(getter=_body,retain) NSString *body; /* unknown property attribute: Sset_body: */
@property(getter=_hasSavedDraft,retain,readonly) id hasSavedDraft;
@property(getter=_infoURL,retain) NSString *infoURL; /* unknown property attribute: Sset_infoURL: */
@property(getter=_itemType,retain) NSString *itemType; /* unknown property attribute: Sset_itemType: */
@property(getter=_nickname,retain) NSString *nickname; /* unknown property attribute: Sset_nickname: */
@property(getter=_nicknameIsConfirmed,retain) id nicknameIsConfirmed; /* unknown property attribute: Sset_nicknameIsConfirmed: */
@property(getter=_rating,retain) NSNumber *rating; /* unknown property attribute: Sset_rating: */
@property(getter=_title,retain) NSString *title; /* unknown property attribute: Sset_title: */

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)_title;
- (id)init;
- (void)dealloc;
- (id)initWithReview:(id)arg1;
- (void)set_hasSavedDraft:(id)arg1;
- (void)set_infoURL:(id)arg1;
- (void)set_itemType:(id)arg1;
- (void)set_nickname:(id)arg1;
- (void)set_nicknameIsConfirmed:(id)arg1;
- (void)set_rating:(id)arg1;
- (id)_nicknameIsConfirmed;
- (id)_nickname;
- (id)_rating;
- (id)_itemType;
- (id)_infoURL;
- (id)_hasSavedDraft;
- (void)set_adamID:(id)arg1;
- (void)set_body:(id)arg1;
- (void)set_title:(id)arg1;
- (id)_adamID;
- (id)saveAsDraft;
- (id)restoreFromDraft;
- (id)removeDraft;
- (id)copyReview;
- (id)_body;
- (id)_className;

@end
