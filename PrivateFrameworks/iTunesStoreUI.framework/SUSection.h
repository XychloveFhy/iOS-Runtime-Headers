/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUSearchFieldConfiguration, NSArray, NSString, UIImage, NSURL;



@interface SUSection : NSObject 
{
    NSString *_identifier;
    UIImage *_image;
    NSString *_imageBaseName;
    BOOL _isDefaultSection;
    BOOL _isLocationSection;
    NSArray *_itemImages;
    NSInteger _minimumNetworkType;
    UIImage *_moreListImage;
    NSString *_partnerHeader;
    SUSearchFieldConfiguration *_searchFieldConfiguration;
    UIImage *_selectedImage;
    UIImage *_selectedMoreListImage;
    NSString *_title;
    NSInteger _type;
    NSURL *_url;
    NSString *_urlBagKey;
}

@property(getter=isTransient,readonly) BOOL transient;
@property(getter=isUsingLocalArtwork,readonly) BOOL usingLocalArtwork;
@property(retain) NSString *urlBagKey;
@property(retain) NSURL *url;
@property NSInteger type;
@property(retain) NSString *title;
@property(retain) UIImage *selectedMoreListImage;
@property(retain) UIImage *selectedImage;
@property(retain) SUSearchFieldConfiguration *searchFieldConfiguration;
@property(retain) NSString *partnerHeader;
@property(retain) UIImage *moreListImage;
@property NSInteger minimumNetworkType;
@property(getter=isLocationSection) BOOL locationSection;
@property(retain) NSArray *itemImages;
@property(retain) UIImage *image;
@property(retain) NSString *identifier;
@property(getter=isDefaultSection) BOOL defaultSection;


- (id)url;
- (void)setUrl:(id)arg1;
- (void)setSelectedImage:(id)arg1;
- (NSInteger)type;
- (id)selectedImage;
- (id)moreListImage;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)title;
- (id)image;
- (void)setType:(NSInteger)arg1;
- (id)description;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 searchField:(id)arg2;
- (BOOL)isUsingLocalArtwork;
- (id)selectedMoreListImage;
- (NSInteger)_minimumNetworkTypeFromDictionary:(id)arg1;
- (NSInteger)_typeForString:(id)arg1;
- (id)urlBagKey;
- (void)setUrlBagKey:(id)arg1;
- (void)setSelectedMoreListImage:(id)arg1;
- (id)searchFieldConfiguration;
- (void)setSearchFieldConfiguration:(id)arg1;
- (void)setPartnerHeader:(id)arg1;
- (void)setMoreListImage:(id)arg1;
- (void)setMinimumNetworkType:(NSInteger)arg1;
- (void)setLocationSection:(BOOL)arg1;
- (id)itemImages;
- (void)setItemImages:(id)arg1;
- (void)setDefaultSection:(BOOL)arg1;
- (BOOL)isTransient;
- (BOOL)isDefaultSection;
- (id)partnerHeader;
- (BOOL)isLocationSection;
- (NSInteger)minimumNetworkType;

@end
