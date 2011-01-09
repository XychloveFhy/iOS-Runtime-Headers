/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface WebEditCommand : NSObject 
{
    struct RefPtr<WebCore::EditCommand> { 
        struct EditCommand {} *m_ptr; 
    } m_command;
}

+ (id)commandWithEditCommand:(struct PassRefPtr<WebCore::EditCommand> { struct EditCommand {} *x1; })arg1;
+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEditCommand:(struct PassRefPtr<WebCore::EditCommand> { struct EditCommand {} *x1; })arg1;
- (struct EditCommand { int (**x1)(); NSInteger x2; struct RefPtr<WebCore::Document> { struct Document {} *x_3_1_1; } x3; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_1_2_1; NSInteger x_1_2_2; unsigned int x_1_2_3 : 2; unsigned int x_1_2_4 : 1; } x_4_1_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_2_2_1; NSInteger x_2_2_2; unsigned int x_2_2_3 : 2; unsigned int x_2_2_4 : 1; } x_4_1_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_3_2_1; NSInteger x_3_2_2; unsigned int x_3_2_3 : 2; unsigned int x_3_2_4 : 1; } x_4_1_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_4_2_1; NSInteger x_4_2_2; unsigned int x_4_2_3 : 2; unsigned int x_4_2_4 : 1; } x_4_1_4; NSInteger x_4_1_5; NSInteger x_4_1_6; NSInteger x_4_1_7; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_4_1_8; } x4; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_1_2_1; NSInteger x_1_2_2; unsigned int x_1_2_3 : 2; unsigned int x_1_2_4 : 1; } x_5_1_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_2_2_1; NSInteger x_2_2_2; unsigned int x_2_2_3 : 2; unsigned int x_2_2_4 : 1; } x_5_1_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_3_2_1; NSInteger x_3_2_2; unsigned int x_3_2_3 : 2; unsigned int x_3_2_4 : 1; } x_5_1_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_4_2_1; NSInteger x_4_2_2; unsigned int x_4_2_3 : 2; unsigned int x_4_2_4 : 1; } x_5_1_4; NSInteger x_5_1_5; NSInteger x_5_1_6; NSInteger x_5_1_7; void*x_5_1_8; } x5; struct RefPtr<WebCore::Element> { struct Element {} *x_6_1_1; } x6; struct RefPtr<WebCore::Element> { struct Element {} *x_7_1_1; } x7; struct CompositeEditCommand {} *x8; }*)command;
     /* Encoded args for previous method: ^{EditCommand=^^?i{RefPtr<WebCore::Document>=^{Document}}{VisibleSelection={Position={RefPtr<WebCore::Node>=^{Node}}ib2b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib2b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib2b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib2b1}iiiB}{VisibleSelection={Position={RefPtr<WebCore::Node>=^{Node}}ib2b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib2b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib2b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib2b1}iiiB}{RefPtr<WebCore::Element>=^{Element}}{RefPtr<WebCore::Element>=^{Element}}^{CompositeEditCommand}}8@0:4 */

- (void)finalize;
- (void)dealloc;

@end
