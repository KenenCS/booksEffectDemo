//
//  AppDelegate.h
//  booksEffectDemo
//
//  Created by kenen on 2017/3/22.
//  Copyright © 2017年 kenen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate,UIPageViewControllerDataSource>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, strong) UIPageViewController *pageVC;

@end

