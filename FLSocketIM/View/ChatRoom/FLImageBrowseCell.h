//
//  FLImageBrowseCell.h
//  FLSocketIM
//
//  Created by FMD on 10/09/2017.
//  Copyright © 2017 FMD. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FLImageBrowseModel;

@interface FLImageBrowseCell : UICollectionViewCell

@property (nonatomic, strong) FLImageBrowseModel *imageModel;

@property (nonatomic, copy) void(^closeBrowserBlock)();

- (void)showAnimationWithStartRect:(CGRect)rect;

- (void)hideAnimationWithEndRect:(CGRect)rect complete:(void(^)())complete;

@end
