/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class DOMNode;



@interface DDRange : NSObject 
{
    DOMNode *_node;
    NSInteger _startOffset;
    NSInteger _endOffset;
}

@property NSInteger endOffset;
@property NSInteger startOffset;
@property(retain) DOMNode *node;

+ (id)rangeWithDOMRange:(id)arg1;

- (void)setStartOffset:(long)arg1;
- (long)endOffset;
- (id)node;
- (long)startOffset;
- (id)description;
- (void)dealloc;
- (id)initWithDOMRange:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setEndOffset:(long)arg1;

@end
