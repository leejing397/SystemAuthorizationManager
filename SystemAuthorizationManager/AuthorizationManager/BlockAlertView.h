//
//  MikeAlertView.h
//  mike2.0
//
//  Created by 佐毅 on 15/7/7.
//  Copyright (c) 2015年 上海乐住信息技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface  BlockAlertView: UIAlertView<UIAlertViewDelegate>

+ (void)alertWithTitle:(NSString *)title
               message:(NSString *)message
               cancelButtonWithTitle:(NSString *)cancelTitle
               cancelBlock:(void (^)())cancelblock
               confirmButtonWithTitle:(NSString *)confirmTitle
               confrimBlock:(void (^)())confirmBlock;


@end
