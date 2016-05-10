//
//  UIView+JadeUI.m
//  JadeUIExample
//
//  Created by 罗英 on 16/5/9.
//  Copyright © 2016年 罗英. All rights reserved.
//

#import "UIView+JadeUI.h"

static CGFloat jd_scalebase = 1;

@implementation UIView(JadeUI)

+(void)jd_setScaleBase:(CGFloat)scale{
    jd_scalebase = scale;
}

+(CGFloat)jd_scaleBase{
    return jd_scalebase;
}


@end
