/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;



@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying>
{
    BOOL _opaque;
    BOOL _selected;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    UIColor *_backgroundColor;
    UIColor *_sectionBorderColor;
    UIColor *_separatorColor;
    UIColor *_topShadowColor;
    UIColor *_bottomShadowColor;
    UIColor *_fillColor;
    float _leftPhase;
    float _rightPhase;
    NSInteger _sectionLocation;
    NSInteger _selectionStyle;
}

@property NSInteger selectionStyle;
@property NSInteger sectionLocation;
@property float rightPhase;
@property float leftPhase;
@property(retain) UIColor *fillColor;
@property(retain) UIColor *bottomShadowColor;
@property(retain) UIColor *topShadowColor;
@property(retain) UIColor *separatorColor;
@property(retain) UIColor *sectionBorderColor;
@property(retain) UIColor *backgroundColor;
@property CGSize size;
@property BOOL selected;
@property BOOL opaque;


- (float)rightPhase;
- (void)setRightPhase:(float)arg1;
- (float)leftPhase;
- (void)setLeftPhase:(float)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (BOOL)opaque;
- (id)topShadowColor;
- (id)bottomShadowColor;
- (NSInteger)selectionStyle;
- (NSInteger)sectionLocation;
- (void)setSectionLocation:(NSInteger)arg1;
- (BOOL)selected;
- (void)setSelectionStyle:(NSInteger)arg1;
- (void)setTopShadowColor:(id)arg1;
- (void)setBottomShadowColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)sectionBorderColor;
- (void)setSectionBorderColor:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (id)separatorColor;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)setOpaque:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;

@end