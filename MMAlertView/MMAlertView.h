//
//  MMAlertView.h
//  trext
//
//  Created by seer on 2017/4/11.
//  Copyright © 2017年 seer. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^Action)();

@interface MMAlertView : UIView
@property(nonatomic ,copy) Action closeAction;
@property(nonatomic ,copy) Action nextAction;

@property(nonatomic ,copy) NSString *title;
@property(nonatomic ,copy) NSString *detailTitle;
@property(nonatomic ,strong) UIImage *images;
@property(nonatomic ,strong) NSString *btnTitle;
@property(nonatomic ,assign) float floa;

-(instancetype)initWithTitle:(NSString *)title
                 detailTitle:(NSString *)detail
                       image:(UIImage *)images
                    btnTitle:(NSString *)btnTitle
                detailHeight:(CGFloat)floa;

-(void)nextActionEv:(Action)action;

@end
