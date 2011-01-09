/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUDOMElement;



@interface SUOverlayTransition : NSObject <NSCoding, NSCopying>
{
    double _duration;
    SUDOMElement *_sourceElement;
    NSInteger _type;
}

@property NSInteger type;
@property(retain) SUDOMElement *sourceElement;
@property double duration;

+ (NSInteger)transitionTypeFromString:(id)arg1;

- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDuration:(double)arg1;
- (double)duration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)sourceElement;
- (void)setSourceElement:(id)arg1;

@end
