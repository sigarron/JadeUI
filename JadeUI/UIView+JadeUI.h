//
//  UIView+JadeUI.h
//  JadeUIExample
//
//  Created by 罗英 on 16/5/9.
//  Copyright © 2016年 罗英. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef UIView *(^JadeUIIntBlock)(int val);
typedef UIView *(^JadeUICGFloatBlock)(CGFloat f);
typedef UIView *(^JadeUICGPointBlock)(CGPoint p);
typedef UIView *(^JadeUICGSizeBlock)(CGSize s);
typedef UIView *(^JadeUICGRectBlock)(CGRect r);
typedef UIView *(^JadeUIUIEdgeInsetBlock)(UIEdgeInsets insets);
typedef UIView *(^JadeUIIdBlock)(id obj);
typedef UIView *(^JadeUIVoidBlock)();

@interface UIView(JadeUI)

/*
 *  UI frame will auto-scaled to fit current UIScreen, default is 1.
 */
+(void)jd_setScaleBase:(CGFloat)scale;


/**
 * Follows methods a all leads to modify the property in UIView and child classes, such as UIButton, UIImageView
 **/
@property (nonatomic, copy) JadeUICGRectBlock jd_frame;

@property (nonatomic, copy) JadeUICGPointBlock jd_center;

@property (nonatomic, copy) JadeUICGFloatBlock jd_height;

@property (nonatomic, copy) JadeUIIntBlock jd_viewFlexbleFlag;

@property (nonatomic, copy) JadeUIUIEdgeInsetBlock jd_contentInset;

@property (nonatomic, copy) JadeUICGFloatBlock jd_progress;

@property (nonatomic, copy) JadeUICGFloatBlock jd_blur;

@property (nonatomic, copy) JadeUICGFloatBlock jd_alpha;

@property (nonatomic, copy) JadeUICGFloatBlock jd_cornerRadius;

@property (nonatomic, copy) JadeUIIdBlock jd_text;

@property (nonatomic, copy) JadeUIIntBlock jd_textAligment;

@property (nonatomic, copy) JadeUIIdBlock jd_image;

@property (nonatomic, copy) JadeUIIdBlock jd_foregroundColor;

@property (nonatomic, copy) JadeUIIdBlock jd_backgroundColor;

@property (nonatomic, copy) JadeUIIdBlock jd_font;

@property (nonatomic, copy) JadeUIIdBlock jd_target;

@property (nonatomic, copy) JadeUIIdBlock jd_selector;

/**
 *  target UIView will find a OLD view by jd_frame and Class in parent view while didMoveToSuperview 
 *      and make all property change on OLD View, and remove itself immediately.
 *      if there is no OLD view founded, then use target view itself.
 *  ATTENTION:  this method must called before all other property blocks.
 *              this method always called jd_lazy.
 */
@property (nonatomic, copy) JadeUIVoidBlock jd_reuse;

/**
 *  target UIView will make all peroperty changed in ChangeToWindow method, 
 *  ATTENTION: this method must called before all other property blocks
 */
@property (nonatomic, copy) JadeUIVoidBlock jd_lazy;

-(BOOL)jd_isLazyLoad;

@end
