/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSData, NSString, NSMutableDictionary;



@interface CTMessagePart : NSObject 
{
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    NSString *_contentId;
    NSString *_contentLocation;
    NSData *_data;
}

@property(copy) NSData *data;
@property(copy) NSString *contentLocation;
@property(copy) NSString *contentId;
@property(copy) NSString *contentType;


- (void)setData:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)contentTypeParameterWithName:(id)arg1;
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)allContentTypeParameterNames;
- (id)contentLocation;
- (void)setContentLocation:(id)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (id)data;
- (void)dealloc;

@end
