/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSOperationQueue, ABImageWellLabelView, ABClippingImageView, <ABPersonImageDataDelegate>, NSOperation, UIImage, <ABStyleProvider>, NSMutableDictionary;



@interface ABPersonImageView : ABPasteboardControl 
{
    void *_displayedPerson;
    ABClippingImageView *_personImageView;
    ABClippingImageView *_wellBorderView;
    ABClippingImageView *_currentBorderView;
    ABClippingImageView *_outlineBorderView;
    ABClippingImageView *_pressedView;
    ABClippingImageView *_pasteboardMaskImageView;
    ABImageWellLabelView *_wellLabel;
    void *_personImageDataCache;
    UIImage *_personImage;
    UIImage *_defaultOrganizationImage;
    UIImage *_imageWellImage;
    UIImage *_outlineImage;
    UIImage *_maskImage;
    UIImage *_pressedImage;
    UIImage *_editOverlayImage;
    UIImage *_wellBorderImage;
    UIImage *_pasteboardMaskImage;
    UIImage *_genericPersonImage;
    BOOL _allowsEditing;
    BOOL _isEditing;
    BOOL _showLabel;
    BOOL _scalesContentToFit;
    BOOL _multiplePhotoBackdropEnabled;
    BOOL _shouldPickBestImage;
    BOOL _needsReflow;
    BOOL _needsReload;
    <ABStyleProvider> *_styleProvider;
    void *_backgroundLoadingAddressBook;
    void *_backgroundLoadingPerson;
    NSOperationQueue *_backgroundLoadingQueue;
    NSOperation *_backgroundLoadingOperation;
    NSMutableDictionary *_imageCache;
    <ABPersonImageDataDelegate> *_imageDataDelegate;
}

@property(retain,readonly) UIImage *maskImage;
@property(retain,readonly) UIImage *outlineImage;
@property BOOL shouldPickBestImage;
@property(retain) <ABStyleProvider> *styleProvider;
@property <ABPersonImageDataDelegate> *imageDataDelegate;
@property BOOL allowsEditing;
@property BOOL scalesContentToFit;
@property(retain) NSMutableDictionary *imageLoadingCache;
@property(retain) NSOperation *asyncImageLoadingOperation;
@property(retain) NSOperationQueue *asyncImageLoadingQueue;
@property void *backgroundLoadingAddressBook;
@property void *backgroundLoadingPerson;

+ (id)newImageWithName:(id)arg1;
+ (struct CGSize { float x1; float x2; })sizeForOptimalPerformance;
+ (void)_initializeSafeCategory;

- (void)reflow;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)reload;
- (void)layoutSubviews;
- (BOOL)genericPlaceholderImageShouldApplyMaskAndOverlay;
- (id)genericPersonImage;
- (id)genericOrganizationImage;
- (id)outlineImage;
- (id)maskImage;
- (id)pressedImage;
- (id)editOverlayImage;
- (id)wellBorderImage;
- (id)pasteboardMaskImage;
- (id)outlineBorderView;
- (id)pressedView;
- (id)wellBorderView;
- (id)pasteboardMaskImageView;
- (void)setShowsLabel:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setBackgroundLoadingAddressBook:(void*)arg1;
- (void)setBackgroundLoadingPerson:(void*)arg1;
- (void)setBackgroundLoadingQueue:(id)arg1 addressBook:(void*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)sizeOverlayToFitIfNecessary:(id)arg1;
- (void)reloadIfNeeded;
- (void)reflowIfNeeded;
- (id)copyImageForPerson:(void*)arg1 withFrameSize:(struct CGSize { float x1; float x2; })arg2 operation:(id)arg3 cache:(id)arg4;
- (id)copyDefaultImageForPerson:(void*)arg1;
- (void)setNeedsReflow;
- (void*)displayedPerson;
- (void)finishedEditingAnimation;
- (void)setMultiplePhotoBackdropEnabled:(BOOL)arg1;
- (BOOL)hasImageToDisplay;
- (id)_newDictionaryWithImageData;
- (id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)arg1;
- (BOOL)abShouldShowMenu;
- (void)abMenuControllerWillShow:(id)arg1;
- (void)abMenuControllerWillHide;
- (id)imageDataDelegate;
- (void)setImageDataDelegate:(id)arg1;
- (BOOL)scalesContentToFit;
- (void)setScalesContentToFit:(BOOL)arg1;
- (id)imageLoadingCache;
- (void)setImageLoadingCache:(id)arg1;
- (id)asyncImageLoadingOperation;
- (void)setAsyncImageLoadingOperation:(id)arg1;
- (id)asyncImageLoadingQueue;
- (void)setAsyncImageLoadingQueue:(id)arg1;
- (void*)backgroundLoadingAddressBook;
- (void*)backgroundLoadingPerson;
- (void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setNeedsReload;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setBackgroundLoadingQueue:(id)arg1 addressBook:(void*)arg2 cache:(id)arg3;
- (BOOL)shouldPickBestImage;
- (void)setShouldPickBestImage:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;

@end
