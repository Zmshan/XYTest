//
//  ArrowViewController.h
//  响应
//
//  Created by open-roc on 2019/6/3.
//  Copyright © 2019 kuaixun100. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ArrowViewController : UIViewController
@property (nonatomic,copy) void (^block)();
@end

NS_ASSUME_NONNULL_END
