//
//  FLTabBarView.h
//  FLSocketIM
//
//  Created by FMD on 2017/7/25.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FLTabBarViewDelegate;
@interface FLTabBarView : UIView

@property (nonatomic, weak) id<FLTabBarViewDelegate>delegate;

@end
@protocol FLTabBarViewDelegate <NSObject>

- (BOOL)fl_tabBarView:(FLTabBarView *)tabBarView shoulSelectItemAtIndex:(NSInteger)index;
- (void)fl_tabBarView:(FLTabBarView *)tabBarView didSelectItemAtIndex:(NSInteger)index;
@optional
- (void)fl_tabBarView:(FLTabBarView *)tabBarView shoulClearUnreadCountAtIndex:(NSInteger)index;
                       
@end
