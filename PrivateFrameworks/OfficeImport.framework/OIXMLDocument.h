/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OIXMLElement, NSString;



@interface OIXMLDocument : OIXMLNode 
{
    OIXMLElement *_rootElement;
    NSString *_version;
    NSString *_encoding;
}


- (void)setVersion:(id)arg1;
- (void)setRootElement:(id)arg1;
- (id)contentString;
- (id)initWithRootElement:(id)arg1;
- (void)setCharacterEncoding:(id)arg1;
- (id)createMutableXMLString;
- (id)rootElement;
- (id)openingTagString;
- (id)XMLString;
- (id)closingTagString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)dealloc;

@end
