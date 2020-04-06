//
//  Meal.swift
//  hello
//
//  Created by 王磊 on 2019/5/1.
//  Copyright © 2019 王磊. All rights reserved.
//

import UIKit


class Meal {
    var name: String
    var photo: UIImage?
    var rating: Int
    
    init?(name: String, photo: UIImage?, rating: Int) {
        guard !name.isEmpty else {
            return nil
        }
        guard (rating >= 0) && (rating <= 5) else {
            return nil
        }
        self.name = name
        self.photo = photo
        self.rating = rating
    }
}
