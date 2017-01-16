//
//  ViewController.m
//  SystemAuthorizationManager
//
//  Created by Kenvin on 17/1/16.
//  Copyright © 2017年 上海方创金融信息服务股份有限公司. All rights reserved.
//

#import "ViewController.h"
#import "SystemPermissionsManager.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [[SystemPermissionsManager sharedManager] requestAuthorization:KCLLocationManager];
}

@end
