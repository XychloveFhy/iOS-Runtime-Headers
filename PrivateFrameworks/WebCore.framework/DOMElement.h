/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMElement : DOMNode 
{
}

@property(copy,readonly) NSString *tagName;
@property(retain,readonly) DOMCSSStyleDeclaration *style;
@property(readonly) NSInteger offsetLeft;
@property(readonly) NSInteger offsetTop;
@property(readonly) NSInteger offsetWidth;
@property(readonly) NSInteger offsetHeight;
@property(retain,readonly) DOMElement *offsetParent;
@property(readonly) NSInteger clientLeft;
@property(readonly) NSInteger clientTop;
@property(readonly) NSInteger clientWidth;
@property(readonly) NSInteger clientHeight;
@property NSInteger scrollLeft;
@property NSInteger scrollTop;
@property(readonly) NSInteger scrollWidth;
@property(readonly) NSInteger scrollHeight;
@property(retain,readonly) DOMElement *firstElementChild;
@property(retain,readonly) DOMElement *lastElementChild;
@property(retain,readonly) DOMElement *previousElementSibling;
@property(retain,readonly) DOMElement *nextElementSibling;
@property(readonly) NSUInteger childElementCount;
@property(copy,readonly) NSString *innerText;

+ (BOOL)isRichTextStyle:(id)arg1;

- (NSUInteger)childElementCount;
- (id)previousElementSibling;
- (NSInteger)clientLeft;
- (id)offsetParent;
- (id)_getURLAttribute:(id)arg1;
- (id)lastElementChild;
- (NSInteger)clientHeight;
- (NSInteger)offsetTop;
- (NSInteger)offsetLeft;
- (NSInteger)clientTop;
- (NSInteger)clientWidth;
- (void)setAttribute:(id)arg1 :(id)arg2;
- (id)getAttributeNode:(id)arg1;
- (id)setAttributeNode:(id)arg1;
- (id)removeAttributeNode:(id)arg1;
- (id)getAttributeNS:(id)arg1 localName:(id)arg2;
- (id)getAttributeNS:(id)arg1 :(id)arg2;
- (void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3;
- (void)setAttributeNS:(id)arg1 :(id)arg2 :(id)arg3;
- (void)removeAttributeNS:(id)arg1 localName:(id)arg2;
- (void)removeAttributeNS:(id)arg1 :(id)arg2;
- (id)getAttributeNodeNS:(id)arg1 localName:(id)arg2;
- (id)getAttributeNodeNS:(id)arg1 :(id)arg2;
- (id)setAttributeNodeNS:(id)arg1;
- (BOOL)hasAttributeNS:(id)arg1 localName:(id)arg2;
- (BOOL)hasAttributeNS:(id)arg1 :(id)arg2;
- (void)scrollIntoView:(BOOL)arg1;
- (BOOL)contains:(id)arg1;
- (void)scrollIntoViewIfNeeded:(BOOL)arg1;
- (void)scrollByLines:(NSInteger)arg1;
- (void)scrollByPages:(NSInteger)arg1;
- (id)querySelector:(id)arg1;
- (id)querySelectorAll:(id)arg1;
- (BOOL)webkitMatchesSelector:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 :(id)arg2;
- (id)getElementsByClassName:(id)arg1;
- (void)blur;
- (void)focus;
- (NSInteger)structuralComplexityContribution;
- (id)firstElementChild;
- (id)nextElementSibling;
- (BOOL)hasAttribute:(id)arg1;
- (BOOL)isFocused;
- (NSInteger)offsetWidth;
- (NSInteger)offsetHeight;
- (id)getElementsByTagName:(id)arg1;
- (NSInteger)scrollLeft;
- (NSInteger)scrollTop;
- (void)setScrollLeft:(NSInteger)arg1;
- (void)setScrollTop:(NSInteger)arg1;
- (id)getAttribute:(id)arg1;
- (id)tagName;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (void)removeAttribute:(id)arg1;
- (id)innerText;
- (NSInteger)scrollWidth;
- (NSInteger)scrollHeight;
- (id)style;
- (struct __GSFont { }*)_font;
- (BOOL)touchCalloutEnabled;
- (id)tapHighlightColor;
- (BOOL)inDocument;
- (BOOL)isHidden;
- (BOOL)exceedsStructuralComplexity:(NSInteger)arg1;
- (BOOL)selectable;
- (BOOL)hasCustomLineHeight;
- (BOOL)hasMarginsOfZero;
- (BOOL)isRichTextElementType;
- (BOOL)isRichTextElement;
- (NSInteger)mf_quoteLevelDelta;
- (void)recursivelyRemoveMailAttributes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;

@end
