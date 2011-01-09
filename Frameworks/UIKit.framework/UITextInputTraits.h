/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;



@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying>
{
    NSInteger autocapitalizationType;
    NSInteger autocorrectionType;
    unsigned int keyboardType : 8;
    unsigned int keyboardAppearance : 8;
    NSInteger returnKeyType;
    BOOL enablesReturnKeyAutomatically;
    BOOL secureTextEntry;
    struct __CFCharacterSet { } *textTrimmingSet;
    UIColor *insertionPointColor;
    NSUInteger insertionPointWidth;
    NSInteger textLoupeVisibility;
    NSInteger textSelectionBehavior;
    id textSuggestionDelegate;
    BOOL contentsIsSingleValue;
    BOOL acceptsEmoji;
    BOOL returnKeyGoesToNextResponder;
    NSInteger emptyContentReturnKeyType;
}

@property BOOL returnKeyGoesToNextResponder;
@property NSInteger emptyContentReturnKeyType;
@property BOOL acceptsEmoji;
@property BOOL contentsIsSingleValue;
@property id textSuggestionDelegate;
@property NSInteger textSelectionBehavior;
@property NSInteger textLoupeVisibility;
@property NSUInteger insertionPointWidth;
@property(retain) UIColor *insertionPointColor;
@property __CFCharacterSet *textTrimmingSet;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property BOOL enablesReturnKeyAutomatically;
@property NSInteger returnKeyType;
@property NSInteger keyboardAppearance;
@property NSInteger keyboardType;
@property NSInteger autocorrectionType;
@property NSInteger autocapitalizationType;

+ (id)defaultTextInputTraits;
+ (BOOL)keyboardTypeRequiresASCIICapable:(NSInteger)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1;

- (void)setToSecureValues;
- (id)dictionaryRepresentation;
- (void)setReturnKeyGoesToNextResponder:(BOOL)arg1;
- (void)setEmptyContentReturnKeyType:(NSInteger)arg1;
- (void)setAcceptsEmoji:(BOOL)arg1;
- (void)setContentsIsSingleValue:(BOOL)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setInsertionPointWidth:(NSUInteger)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (BOOL)acceptsEmoji;
- (BOOL)contentsIsSingleValue;
- (NSInteger)emptyContentReturnKeyType;
- (id)textSuggestionDelegate;
- (BOOL)returnKeyGoesToNextResponder;
- (void)setToDefaultValues;
- (void)setAutocapitalizationType:(NSInteger)arg1;
- (void)setAutocorrectionType:(NSInteger)arg1;
- (void)setKeyboardAppearance:(NSInteger)arg1;
- (void)setKeyboardType:(NSInteger)arg1;
- (void)setReturnKeyType:(NSInteger)arg1;
- (void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
- (NSInteger)autocapitalizationType;
- (NSInteger)autocorrectionType;
- (NSInteger)keyboardAppearance;
- (NSInteger)keyboardType;
- (NSInteger)returnKeyType;
- (BOOL)enablesReturnKeyAutomatically;
- (BOOL)isSecureTextEntry;
- (NSInteger)textSelectionBehavior;
- (NSUInteger)insertionPointWidth;
- (void)setTextSelectionBehavior:(NSInteger)arg1;
- (void)setInsertionPointColor:(id)arg1;
- (void)setTextLoupeVisibility:(NSInteger)arg1;
- (id)insertionPointColor;
- (NSInteger)textLoupeVisibility;
- (void)takeTraitsFrom:(id)arg1;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (void)setSecureTextEntry:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
