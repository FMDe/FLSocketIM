//
//  FLImageBrowseViewController.h
//  FLSocketIM
//
//  Created by FMD on 10/09/2017.
//  Copyright © 2017 FMD. All rights reserved.
//

#import "FLViewController.h"

@interface FLImageBrowseViewController : FLViewController

- (instancetype)initWithImageModels:(NSArray *)imageModels selectedIndex:(NSInteger)selectedIndex;
- (void)show;

@end
