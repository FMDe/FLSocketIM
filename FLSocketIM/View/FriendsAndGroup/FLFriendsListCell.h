//
//  FLFriendsListCell.h
//  FLSocketIM
//
//  Created by FMD on 2017/7/12.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FLFriendModel;
@interface FLFriendsListCell : UITableViewCell

@property (nonatomic, strong) UIImageView *iconImage;

@property (nonatomic, strong) FLFriendModel *model;

@end
